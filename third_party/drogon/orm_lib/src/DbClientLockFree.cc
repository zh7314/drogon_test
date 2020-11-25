/**
 *
 *  DbClientLockFree.cc
 *  An Tao
 *
 *  Copyright 2018, An Tao.  All rights reserved.
 *  https://github.com/an-tao/drogon
 *  Use of this source code is governed by a MIT license
 *  that can be found in the License file.
 *
 *  Drogon
 *
 */

#include "DbClientLockFree.h"
#include "DbConnection.h"
#include "TransactionImpl.h"
#include <drogon/config.h>
#if USE_POSTGRESQL
#include "postgresql_impl/PgConnection.h"
#endif
#if USE_MYSQL
#include "mysql_impl/MysqlConnection.h"
#endif
#include "TransactionImpl.h"
#include <drogon/drogon.h>
#include <drogon/orm/DbClient.h>
#include <drogon/orm/Exception.h>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdio.h>
#ifndef _WIN32
#include <sys/select.h>
#include <unistd.h>
#endif
#include <thread>
#include <trantor/net/EventLoop.h>
#include <trantor/net/Channel.h>
#include <unordered_set>
#include <vector>

using namespace drogon::orm;

DbClientLockFree::DbClientLockFree(const std::string &connInfo,
                                   trantor::EventLoop *loop,
                                   ClientType type,
                                   size_t connectionNumberPerLoop)
    : connectionInfo_(connInfo),
      loop_(loop),
      connectionsNumber_(connectionNumberPerLoop)
{
    type_ = type;
    LOG_TRACE << "type=" << (int)type;
    if (type == ClientType::PostgreSQL || type == ClientType::Mysql)
    {
        loop_->queueInLoop([this]() {
            for (size_t i = 0; i < connectionsNumber_; ++i)
                connectionHolders_.push_back(newConnection());
        });
    }
    else
    {
        LOG_ERROR << "No supported database type:" << (int)type;
    }
}

DbClientLockFree::~DbClientLockFree() noexcept
{
    for (auto &conn : connections_)
    {
        conn->disconnect();
    }
}

void DbClientLockFree::execSql(
    const char *sql,
    size_t sqlLength,
    size_t paraNum,
    std::vector<const char *> &&parameters,
    std::vector<int> &&length,
    std::vector<int> &&format,
    ResultCallback &&rcb,
    std::function<void(const std::exception_ptr &)> &&exceptCallback)
{
    assert(paraNum == parameters.size());
    assert(paraNum == length.size());
    assert(paraNum == format.size());
    assert(rcb);
    loop_->assertInLoopThread();
    if (!connections_.empty() && sqlCmdBuffer_.empty() &&
        transCallbacks_.empty())
    {
#if (!LIBPQ_SUPPORTS_BATCH_MODE)
        for (auto &conn : connections_)
        {
            if (!conn->isWorking() &&
                (transSet_.empty() || transSet_.find(conn) == transSet_.end()))
            {
                conn->execSql(
                    string_view{sql, sqlLength},
                    paraNum,
                    std::move(parameters),
                    std::move(length),
                    std::move(format),
                    [rcb = std::move(rcb), this](const Result &r) {
                        if (sqlCmdBuffer_.empty())
                        {
                            rcb(r);
                        }
                        else
                        {
                            loop_->queueInLoop(
                                [rcb = std::move(rcb), r]() { rcb(r); });
                        }
                    },
                    std::move(exceptCallback));
                return;
            }
        }
#else
        if (type_ != ClientType::PostgreSQL)
        {
            for (auto &conn : connections_)
            {
                if (!conn->isWorking() &&
                    (transSet_.empty() ||
                     transSet_.find(conn) == transSet_.end()))
                {
                    conn->execSql(
                        string_view{sql, sqlLength},
                        paraNum,
                        std::move(parameters),
                        std::move(length),
                        std::move(format),
                        [rcb = std::move(rcb), this](const Result &r) {
                            if (sqlCmdBuffer_.empty())
                            {
                                rcb(r);
                            }
                            else
                            {
                                loop_->queueInLoop(
                                    [rcb = std::move(rcb), r]() { rcb(r); });
                            }
                        },
                        std::move(exceptCallback));
                    return;
                }
            }
        }
        else
        {
            /// pg batch mode
            for (size_t i = 0; i < connections_.size(); ++i)
            {
                auto &conn = connections_[connectionPos_++];
                if (connectionPos_ >= connections_.size())
                    connectionPos_ = 0;
                if (transSet_.empty() ||
                    transSet_.find(conn) == transSet_.end())
                {
                    conn->execSql(string_view{sql, sqlLength},
                                  paraNum,
                                  std::move(parameters),
                                  std::move(length),
                                  std::move(format),
                                  std::move(rcb),
                                  std::move(exceptCallback));
                    return;
                }
            }
        }

#endif
    }

    if (sqlCmdBuffer_.size() > 20000)
    {
        // too many queries in buffer;
        try
        {
            throw Failure("Too many queries in buffer");
        }
        catch (...)
        {
            exceptCallback(std::current_exception());
        }
        return;
    }

    // LOG_TRACE << "Push query to buffer";
    sqlCmdBuffer_.emplace_back(std::make_shared<SqlCmd>(
        string_view{sql, sqlLength},
        paraNum,
        std::move(parameters),
        std::move(length),
        std::move(format),
        [rcb = std::move(rcb), this](const Result &r) {
            if (sqlCmdBuffer_.empty())
            {
                rcb(r);
            }
            else
            {
                loop_->queueInLoop([rcb = std::move(rcb), r]() { rcb(r); });
            }
        },
        std::move(exceptCallback)));
}

std::shared_ptr<Transaction> DbClientLockFree::newTransaction(
    const std::function<void(bool)> &)
{
    // Don't support transaction;
    LOG_ERROR
        << "You can't use the synchronous interface in the fast Database "
           "client, please use the asynchronous version (newTransactionAsync)";
    assert(0);
    return nullptr;
}

void DbClientLockFree::newTransactionAsync(
    const std::function<void(const std::shared_ptr<Transaction> &)> &callback)
{
    loop_->assertInLoopThread();
    for (auto &conn : connections_)
    {
        if (!conn->isWorking() && transSet_.find(conn) == transSet_.end())
        {
            makeTrans(conn,
                      std::function<void(const std::shared_ptr<Transaction> &)>(
                          callback));
            return;
        }
    }
    transCallbacks_.push(callback);
}

void DbClientLockFree::makeTrans(
    const DbConnectionPtr &conn,
    std::function<void(const std::shared_ptr<Transaction> &)> &&callback)
{
    std::weak_ptr<DbClientLockFree> weakThis = shared_from_this();
    auto trans = std::shared_ptr<TransactionImpl>(new TransactionImpl(
        type_, conn, std::function<void(bool)>(), [weakThis, conn]() {
            auto thisPtr = weakThis.lock();
            if (!thisPtr)
                return;

            if (conn->status() == ConnectStatus::Bad)
            {
                return;
            }
            if (!thisPtr->transCallbacks_.empty())
            {
                auto callback = std::move(thisPtr->transCallbacks_.front());
                thisPtr->transCallbacks_.pop();
                thisPtr->makeTrans(conn, std::move(callback));
                return;
            }

            for (auto &connPtr : thisPtr->connections_)
            {
                if (connPtr == conn)
                {
                    conn->loop()->queueInLoop([weakThis, conn]() {
                        auto thisPtr = weakThis.lock();
                        if (!thisPtr)
                            return;
                        std::weak_ptr<DbConnection> weakConn = conn;
                        conn->setIdleCallback([weakThis, weakConn]() {
                            auto thisPtr = weakThis.lock();
                            if (!thisPtr)
                                return;
                            auto connPtr = weakConn.lock();
                            if (!connPtr)
                                return;
                            thisPtr->handleNewTask(connPtr);
                        });
                        thisPtr->transSet_.erase(conn);
                        thisPtr->handleNewTask(conn);
                    });
                    break;
                }
            }
        }));
    transSet_.insert(conn);
    trans->doBegin();
    conn->loop()->queueInLoop(
        [callback = std::move(callback), trans] { callback(trans); });
}

void DbClientLockFree::handleNewTask(const DbConnectionPtr &conn)
{
    assert(conn);
    assert(!conn->isWorking());

    if (!transCallbacks_.empty())
    {
        auto callback = std::move(transCallbacks_.front());
        transCallbacks_.pop();
        makeTrans(conn, std::move(callback));
        return;
    }

    if (!sqlCmdBuffer_.empty())
    {
#if LIBPQ_SUPPORTS_BATCH_MODE
        if (type_ != ClientType::PostgreSQL)
        {
            std::shared_ptr<SqlCmd> cmd = std::move(sqlCmdBuffer_.front());
            sqlCmdBuffer_.pop_front();
            conn->execSql(std::move(cmd->sql_),
                          cmd->parametersNumber_,
                          std::move(cmd->parameters_),
                          std::move(cmd->lengths_),
                          std::move(cmd->formats_),
                          std::move(cmd->callback_),
                          std::move(cmd->exceptionCallback_));
        }
        else
        {
            std::deque<std::shared_ptr<SqlCmd>> cmds;
            using std::swap;
            swap(cmds, sqlCmdBuffer_);
            conn->batchSql(std::move(cmds));
        }
#else
        std::shared_ptr<SqlCmd> cmd = std::move(sqlCmdBuffer_.front());
        sqlCmdBuffer_.pop_front();
        conn->execSql(std::move(cmd->sql_),
                      cmd->parametersNumber_,
                      std::move(cmd->parameters_),
                      std::move(cmd->lengths_),
                      std::move(cmd->formats_),
                      std::move(cmd->callback_),
                      std::move(cmd->exceptionCallback_));
#endif
        return;
    }
}

DbConnectionPtr DbClientLockFree::newConnection()
{
    DbConnectionPtr connPtr;
    if (type_ == ClientType::PostgreSQL)
    {
#if USE_POSTGRESQL
        connPtr = std::make_shared<PgConnection>(loop_, connectionInfo_);
#else
        return nullptr;
#endif
    }
    else if (type_ == ClientType::Mysql)
    {
#if USE_MYSQL
        connPtr = std::make_shared<MysqlConnection>(loop_, connectionInfo_);
#else
        return nullptr;
#endif
    }
    else
    {
        return nullptr;
    }

    std::weak_ptr<DbClientLockFree> weakPtr = shared_from_this();
    connPtr->setCloseCallback([weakPtr](const DbConnectionPtr &closeConnPtr) {
        // Erase the connection
        auto thisPtr = weakPtr.lock();
        if (!thisPtr)
            return;

        for (auto iter = thisPtr->connections_.begin();
             iter != thisPtr->connections_.end();
             iter++)
        {
            if (closeConnPtr == *iter)
            {
                thisPtr->connections_.erase(iter);
                break;
            }
        }
        for (auto iter = thisPtr->connectionHolders_.begin();
             iter != thisPtr->connectionHolders_.end();
             iter++)
        {
            if (closeConnPtr == *iter)
            {
                thisPtr->connectionHolders_.erase(iter);
                break;
            }
        }

        thisPtr->transSet_.erase(closeConnPtr);
        // Reconnect after 1 second
        thisPtr->loop_->runAfter(1, [weakPtr] {
            auto thisPtr = weakPtr.lock();
            if (!thisPtr)
                return;
            thisPtr->connectionHolders_.push_back(thisPtr->newConnection());
        });
    });
    connPtr->setOkCallback([weakPtr](const DbConnectionPtr &okConnPtr) {
        LOG_TRACE << "connected!";
        auto thisPtr = weakPtr.lock();
        if (!thisPtr)
            return;
        thisPtr->connections_.push_back(okConnPtr);
        thisPtr->handleNewTask(okConnPtr);
    });
    std::weak_ptr<DbConnection> weakConnPtr = connPtr;
    connPtr->setIdleCallback([weakPtr, weakConnPtr]() {
        auto thisPtr = weakPtr.lock();
        if (!thisPtr)
            return;
        auto connPtr = weakConnPtr.lock();
        if (!connPtr)
            return;
        thisPtr->handleNewTask(connPtr);
    });
    // std::cout<<"newConn end"<<connPtr<<std::endl;
    return connPtr;
}

bool DbClientLockFree::hasAvailableConnections() const noexcept
{
    return !connections_.empty();
}
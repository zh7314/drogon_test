/**
 *
 *  ClientCompany.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#include <trantor/utils/Date.h>
#include <trantor/utils/Logger.h>
#include <json/json.h>
#include <string>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

using namespace drogon::orm;
namespace drogon
{
namespace orm
{
class DbClient;
using DbClientPtr = std::shared_ptr<DbClient>;
}
}
namespace drogon_model
{
namespace v2 
{

class ClientCompany
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _client_company_name;
        static const std::string _create_time;
        static const std::string _update_time;
        static const std::string _contacts;
        static const std::string _contacts_phone;
        static const std::string _admins_id;
    };

    const static int primaryKeyNumber;
    const static std::string tableName;
    const static bool hasPrimaryKey;
    const static std::string primaryKeyName;
    using PrimaryKeyType = uint32_t;
    const PrimaryKeyType &getPrimaryKey() const;

    /**
     * @brief constructor
     * @param r One row of records in the SQL query result.
     * @param indexOffset Set the offset to -1 to access all columns by column names, 
     * otherwise access all columns by offsets.
     * @note If the SQL is not a style of 'select * from table_name ...' (select all 
     * columns by an asterisk), please set the offset to -1.
     */
    explicit ClientCompany(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit ClientCompany(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    ClientCompany(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    ClientCompany() = default;
    
    void updateByJson(const Json::Value &pJson) noexcept(false);
    void updateByMasqueradedJson(const Json::Value &pJson,
                                 const std::vector<std::string> &pMasqueradingVector) noexcept(false);
    static bool validateJsonForCreation(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForCreation(const Json::Value &,
                                                const std::vector<std::string> &pMasqueradingVector,
                                                    std::string &err);
    static bool validateJsonForUpdate(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForUpdate(const Json::Value &,
                                          const std::vector<std::string> &pMasqueradingVector,
                                          std::string &err);
    static bool validJsonOfField(size_t index,
                          const std::string &fieldName,
                          const Json::Value &pJson, 
                          std::string &err, 
                          bool isForCreation);

    /**  For column id  */
    ///Get the value of the column id, returns the default value if the column is null
    const uint32_t &getValueOfId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint32_t> &getId() const noexcept;

    ///Set the value of the column id
    void setId(const uint32_t &pId) noexcept;


    /**  For column client_company_name  */
    ///Get the value of the column client_company_name, returns the default value if the column is null
    const std::string &getValueOfClientCompanyName() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getClientCompanyName() const noexcept;

    ///Set the value of the column client_company_name
    void setClientCompanyName(const std::string &pClientCompanyName) noexcept;
    void setClientCompanyName(std::string &&pClientCompanyName) noexcept;


    /**  For column create_time  */
    ///Get the value of the column create_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfCreateTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getCreateTime() const noexcept;

    ///Set the value of the column create_time
    void setCreateTime(const ::trantor::Date &pCreateTime) noexcept;


    /**  For column update_time  */
    ///Get the value of the column update_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfUpdateTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getUpdateTime() const noexcept;

    ///Set the value of the column update_time
    void setUpdateTime(const ::trantor::Date &pUpdateTime) noexcept;


    /**  For column contacts  */
    ///Get the value of the column contacts, returns the default value if the column is null
    const std::string &getValueOfContacts() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getContacts() const noexcept;

    ///Set the value of the column contacts
    void setContacts(const std::string &pContacts) noexcept;
    void setContacts(std::string &&pContacts) noexcept;
    void setContactsToNull() noexcept;


    /**  For column contacts_phone  */
    ///Get the value of the column contacts_phone, returns the default value if the column is null
    const std::string &getValueOfContactsPhone() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getContactsPhone() const noexcept;

    ///Set the value of the column contacts_phone
    void setContactsPhone(const std::string &pContactsPhone) noexcept;
    void setContactsPhone(std::string &&pContactsPhone) noexcept;
    void setContactsPhoneToNull() noexcept;


    /**  For column admins_id  */
    ///Get the value of the column admins_id, returns the default value if the column is null
    const int32_t &getValueOfAdminsId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getAdminsId() const noexcept;

    ///Set the value of the column admins_id
    void setAdminsId(const int32_t &pAdminsId) noexcept;



    static size_t getColumnNumber() noexcept {  return 7;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<ClientCompany>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<uint32_t> id_;
    std::shared_ptr<std::string> clientCompanyName_;
    std::shared_ptr<::trantor::Date> createTime_;
    std::shared_ptr<::trantor::Date> updateTime_;
    std::shared_ptr<std::string> contacts_;
    std::shared_ptr<std::string> contactsPhone_;
    std::shared_ptr<int32_t> adminsId_;
    struct MetaData
    {
        const std::string colName_;
        const std::string colType_;
        const std::string colDatabaseType_;
        const ssize_t colLength_;
        const bool isAutoVal_;
        const bool isPrimaryKey_;
        const bool notNull_;
    };
    static const std::vector<MetaData> metaData_;
    bool dirtyFlag_[7]={ false };
  public:
    static const std::string &sqlForFindingByPrimaryKey()
    {
        static const std::string sql="select * from " + tableName + " where id = ?";
        return sql;                   
    }

    static const std::string &sqlForDeletingByPrimaryKey()
    {
        static const std::string sql="delete from " + tableName + " where id = ?";
        return sql;                   
    }
    std::string sqlForInserting(bool &needSelection) const
    {
        std::string sql="insert into " + tableName + " (";
        size_t parametersCount = 0;
        needSelection = false;
            sql += "id,";
            ++parametersCount;
        if(dirtyFlag_[1])
        {
            sql += "client_company_name,";
            ++parametersCount;
        }
        sql += "create_time,";
        ++parametersCount;
        if(!dirtyFlag_[2])
        {
            needSelection=true;
        }
        sql += "update_time,";
        ++parametersCount;
        if(!dirtyFlag_[3])
        {
            needSelection=true;
        }
        if(dirtyFlag_[4])
        {
            sql += "contacts,";
            ++parametersCount;
        }
        if(dirtyFlag_[5])
        {
            sql += "contacts_phone,";
            ++parametersCount;
        }
        sql += "admins_id,";
        ++parametersCount;
        if(!dirtyFlag_[6])
        {
            needSelection=true;
        }
        needSelection=true;
        if(parametersCount > 0)
        {
            sql[sql.length()-1]=')';
            sql += " values (";
        }
        else
            sql += ") values (";
        
        sql +="default,";
        if(dirtyFlag_[1])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[2])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[3])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[4])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[5])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[6])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(parametersCount > 0)
        {
            sql.resize(sql.length() - 1);
        }
        sql.append(1, ')');
        LOG_TRACE << sql;
        return sql;   
    }
};
} // namespace v2
} // namespace drogon_model

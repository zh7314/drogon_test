#include "Api_IndexController.h"
#include "../models/News.h"
#include <exception>
#include <trantor/utils/Date.h>

using namespace api;
using namespace drogon_model::v2;
using namespace drogon::orm;

void Api_IndexController::index(const HttpRequestPtr &req,
                                std::function<void(const HttpResponsePtr &)> &&callback)
{
    //控制台中文异常
    std::system("chcp 65001");

    auto clientPtr = drogon::app().getDbClient();
    //同步查询
    Mapper<News> mp(clientPtr);
    std::vector<News> news_list = mp.orderBy(News::Cols::_id).limit(15).offset(0).findAll();
    std::cout << news_list.size() << " rows 111111111111111111111111111!" << std::endl;
    //异步查询
    auto f = clientPtr->execSqlAsyncFuture("select id,title,create_time from news order by create_time desc limit 15");
    auto result = f.get();

    std::cout << typeid(result).name() << std::endl;
    std::cout << result.size() << " rows selected!" << std::endl;

    Json::Value vl;
    for (auto rr : news_list)
    {
        // std::cout << rr.toJson() << std::endl;
        vl.append(rr.toJson());
    }

    Json::Value vt;
    int i = 0;
    for (auto rt : result)
    {
        vt[i]["id"] = rt["id"].as<std::string>();
        vt[i]["title"] = rt["title"].as<std::string>();
        vt[i]["create_time"] = rt["create_time"].as<std::string>();
        i++;
    }

    Json::Value ret;
    ret["result"] = "ok";
    ret["news"] = vt;
    // ret["news_list"] = vl;

    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void Api_IndexController::news_detail(const HttpRequestPtr &req,
                                      std::function<void(const HttpResponsePtr &)> &&callback, std::string news_id)
{
    //控制台中文异常
    std::system("chcp 65001");

    std::cout << "111111111111111111111,news_id=" << news_id << std::endl;
    auto clientPtr = drogon::app().getDbClient();
    //同步查询
    Mapper<News> mp(clientPtr);
    std::vector<News> news1 = mp.findBy(Criteria(News::Cols::_id, CompareOperator::EQ, news_id));
    // Json::Value vl;
    // vl.append(news1[0].toJson());

    //异步查询,window10下编译会通过，但是会出现"Unknown column '$1' in 'where clause'" 导致程序奔溃,mysql的占位符是?
    auto f = clientPtr->execSqlAsyncFuture("select id,title,create_time from news where id = ?", news_id);
    auto result = f.get();
    std::cout << result.size() << " rows selected!" << std::endl;

    Json::Value vt;

    vt["id"] = result[0]["id"].as<std::string>();
    vt["title"] = result[0]["title"].as<std::string>();
    vt["create_time"] = result[0]["create_time"].as<std::string>();

    Json::Value ret;
    ret["result"] = "ok";
    // ret["news"] = news1[0].toJson();
    ret["news1"] = vt;
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

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
    auto f = clientPtr->execSqlAsyncFuture("select * from news order by create_time desc limit 15");
    auto result = f.get();

    std::cout << typeid(result).name() << std::endl;
    std::cout << result.size() << " rows selected!" << std::endl;

    Json::Value ret;
    ret["result"] = "ok";
    ret["news_list"] = news_list.data();
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void Api_IndexController::news_detail(const HttpRequestPtr &req,
                                      std::function<void(const HttpResponsePtr &)> &&callback, std::string news_id)
{
    //控制台中文异常
    std::system("chcp 65001");

    auto clientPtr = drogon::app().getDbClient();
    //同步查询
    Mapper<News> mp(clientPtr);
    std::vector<News> news1 = mp.findBy(Criteria(News::Cols::_id, CompareOperator::EQ, news_id));
    std::cout << news_id << " rows 111111111111111111111111111!" << std::endl;

    std::cout << news1.size() << " rows 111111111111111111111111111!" << std::endl;

    Json::Value ret;
    ret["result"] = "ok";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

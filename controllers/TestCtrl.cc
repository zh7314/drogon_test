#include "TestCtrl.h"
using namespace web;
//add definition of your processing function here
void TestCtrl::tt(const HttpRequestPtr &req,
           std::function<void (const HttpResponsePtr &)> &&callback)
{
    Json::Value ret;
    ret["result"]="ok11111";
    ret["token"]=drogon::utils::getUuid();
    ret["name"] = "zx";
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void TestCtrl::name(const HttpRequestPtr &req,
             std::function<void (const HttpResponsePtr &)> &&callback) const
{


    auto clientPtr = drogon::app().getDbClient();
    auto f = clientPtr->execSqlAsyncFuture("select * from admin where id=$1",
                                       "default");

    auto r = f.get(); // Block until we get the result or catch the exception;
    std::cout << r.size() << " rows selected!" << std::endl;

    Json::Value ret;
    ret["result"]="ok";
    ret["user_name"]="Jack";
    ret["gender"]=1;
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
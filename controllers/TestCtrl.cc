#include "TestCtrl.h"
#include "../models/Admin.h"

using namespace web;
// using namespace drogon_model::v2;


void TestCtrl::name(const HttpRequestPtr &req,
             std::function<void (const HttpResponsePtr &)> &&callback) const
{
    auto clientPtr = drogon::app().getDbClient();
    // auto f = clientPtr->execSqlAsyncFuture("select * from admin");
    // auto r = f.get(); // Block until we get the result or catch the exception;
    // std::cout << r.size() << " rows selected!" << std::endl;
    // int i = 0;
    //  for (auto row : r)
    // {
    //     std::cout << i++ << ": user name is " << row["real_name"].as<std::string>() << std::endl;
    // }

    Mapper<Admin> mp(clientPtr);
    // auto rr = mp.orderBy(Admin::Cols::_id).limit(25).offset(0).findAll();
     auto rr = mp.findAll();
    std::cout << rr.size() << " rows selected!" << std::endl;

    Json::Value ret;
    ret["result"]="ok";
    ret["user_name"]="Jack";
    ret["gender"]=1;
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}
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

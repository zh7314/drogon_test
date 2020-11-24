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
    Json::Value res;
    res["result"]="ok";
    res["user_name"]="Jack";
    res["gender"]=1;
    auto rr=HttpResponse::newHttpJsonResponse(res);
    callback(rr);
}
#include "IndexCtrl.h"

using namespace web;

void IndexCtrl::index(const HttpRequestPtr &req,
           std::function<void (const HttpResponsePtr &)> &&callback)
{
    Json::Value ret;
    ret["result"]="ok11111";
    ret["token"]=drogon::utils::getUuid();
    ret["name"] = "zx";
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void IndexCtrl::news(const HttpRequestPtr &req,
           std::function<void (const HttpResponsePtr &)> &&callback,std::string news_id)
{
    Json::Value ret;
    ret["result"]="ok11111";
    ret["token"]=drogon::utils::getUuid();
    ret["name"] = "zx";
    ret["news_id"] = news_id;
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

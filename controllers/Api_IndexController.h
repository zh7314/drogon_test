#pragma once

#include <drogon/HttpController.h>
using namespace drogon;
namespace api
{
class Api_IndexController:public drogon::HttpController<Api_IndexController>
{
  public:
    METHOD_LIST_BEGIN

    ADD_METHOD_TO(Api_IndexController::index,"/api/index",Get);
    ADD_METHOD_TO(Api_IndexController::news_detail,"/api/news_detail?news_id={1}",Get);

    METHOD_LIST_END

    void index(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback);
    void news_detail(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback,std::string news_id);

};
}

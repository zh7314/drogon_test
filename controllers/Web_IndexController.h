#pragma once

#include <drogon/HttpController.h>
using namespace drogon;
namespace web
{
class Web_IndexController:public drogon::HttpController<Web_IndexController>
{
  public:
    METHOD_LIST_BEGIN

    ADD_METHOD_TO(Web_IndexController::index,"/",Get);
    ADD_METHOD_TO(Web_IndexController::news_detail,"/news_detail?news_id={1}",Get);

    METHOD_LIST_END

    void index(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback);
    void news_detail(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback,std::string news_id);

};
}

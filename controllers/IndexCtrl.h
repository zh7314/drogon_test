#pragma once
#include <drogon/HttpController.h>
using namespace drogon;
namespace web
{
class IndexCtrl:public drogon::HttpController<IndexCtrl>
{
  public:
    METHOD_LIST_BEGIN

    ADD_METHOD_TO(IndexCtrl::index,"/",Get);
    ADD_METHOD_TO(IndexCtrl::news,"/news?news_id={1}",Get);

    METHOD_LIST_END

    void index(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback);
    void news(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback,std::string news_id);

};
}

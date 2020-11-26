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

    METHOD_LIST_END

    void index(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback);

};
}

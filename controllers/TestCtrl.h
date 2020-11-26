#pragma once
#include <drogon/HttpController.h>

using namespace drogon;
namespace web
{
class TestCtrl:public drogon::HttpController<TestCtrl>
{
  public:
    METHOD_LIST_BEGIN

//    METHOD_ADD(TestCtrl::tt,"/tt",Get);
    ADD_METHOD_TO(TestCtrl::name,"/name",Get);
    ADD_METHOD_TO(TestCtrl::tt,"/tt",Get);
    METHOD_LIST_END

     void tt(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback);
     void name(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback) const;
};
}

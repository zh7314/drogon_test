#pragma once
#include <drogon/HttpController.h>
using namespace drogon;
namespace web
{
class TestCtrl:public drogon::HttpController<TestCtrl>
{
  public:
    METHOD_LIST_BEGIN
    //use METHOD_ADD to add your custom processing function here;
//    METHOD_ADD(TestCtrl::tt,"/tt",Get);
    ADD_METHOD_TO(TestCtrl::name,"/name",Get);
    //ADD_METHOD_TO(index::your_method_name,"/absolute/path/{1}/{2}/list",Get);//path is /absolute/path/{arg1}/{arg2}/list

    ADD_METHOD_TO(TestCtrl::tt,"/tt",Get);
    METHOD_LIST_END
    // your declaration of processing function maybe like this:
     void tt(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback);
     void name(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback) const;
};
}

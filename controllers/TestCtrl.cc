#include "TestCtrl.h"
#include "../models/News.h"
#include <exception> 

using namespace web;
using namespace drogon_model::v2;
using namespace drogon::orm;


void TestCtrl::name(const HttpRequestPtr &req,
             std::function<void (const HttpResponsePtr &)> &&callback) const
{
    try{
        auto clientPtr = drogon::app().getDbClient();
        // auto f = clientPtr->execSqlAsyncFuture("select * from news");
        // auto r = f.get(); // Block until we get the result or catch the exception;
        // std::cout << r.size() << " rows zzzzzzzzzzzzzzzzzzzzzzzz!" << std::endl;
        // int i = 0;
        //  for (auto row : r)
        // {
        //     std::cout << i++ << ": user name is " << row["real_name"].as<std::string>() << std::endl;
        // }
        Mapper<News> mp(clientPtr);
        // std::vector<Admin> uu = mp.orderBy(Admin::Cols::_id).limit(25).offset(0).findAll();

        // auto iii = mp.count();
        // std::cout << iii << " rows 111111111111111!" << std::endl;

        std::vector<News> uu = mp.orderBy(News::Cols::_id).limit(15).offset(0).findAll();
        std::cout << uu.size() << " rows 2222222222222222!" << std::endl;
        int i = 0;
         for (auto row : uu)
        {
            std::cout << i++ << ": user name is " << *row.getId() << std::endl;
        }

    }catch (const DrogonDbException &e){
        std::cout << "error:" << e.base().what() << std::endl;
    }
    Json::Value ret;
    ret["result"]="33";
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

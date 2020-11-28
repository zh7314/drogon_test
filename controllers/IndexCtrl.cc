#include "IndexCtrl.h"
#include "../models/News.h"
#include <exception>
#include <trantor/utils/Date.h>

using namespace web;
using namespace drogon_model::v2;
using namespace drogon::orm;

void IndexCtrl::index(const HttpRequestPtr &req,
                      std::function<void(const HttpResponsePtr &)> &&callback)
{
    //同步查询
    auto clientPtr = drogon::app().getDbClient();
    Mapper<News> mp(clientPtr);
    std::vector<News> uu = mp.orderBy(News::Cols::_id).limit(15).offset(0).findAll();
    std::cout << uu.size() << " rows 111111111111111111111111111!" << std::endl;
   
    HttpViewData data;
    data.insert("title", "zxxxxxxxxx");
    data.insert("news", uu);

    // data.insert("parameters", para);
    auto resp = HttpResponse::newHttpViewResponse("Index.csp", data);
    callback(resp);
}

void IndexCtrl::news(const HttpRequestPtr &req,
                     std::function<void(const HttpResponsePtr &)> &&callback, std::string news_id)
{
     //同步查询
    auto clientPtr = drogon::app().getDbClient();
    Mapper<News> mp(clientPtr);
    std::vector<News> uu = mp.orderBy(News::Cols::_id).limit(15).offset(0).findAll();
    std::system("chcp 65001");

    std::cout << uu.size() << " rows xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx!" << std::endl;
    int i = 0;
    for (auto rr : uu)
    {
        trantor::Date now = *rr.getCreateTime();

        std::cout << now.toDbStringLocal()<< std::endl;
        // std::cout << *rr.getCreateTime() << std::endl;
        std::cout << *rr.getId() << std::endl;
        // std::cout << *rr.getTitle() << std::endl;
    }
    

    HttpViewData data;
    data.insert("title", "zxxxxxxxxx");
    data.insert("news_id", news_id);
    data.insert("news", uu);
    auto resp = HttpResponse::newHttpViewResponse("News.csp", data);

    // auto resp = HttpResponse::newHttpViewResponse("Index.csp", data);
    callback(resp);
}

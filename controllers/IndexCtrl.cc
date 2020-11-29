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
    //控制台中文异常
    std::system("chcp 65001");

    auto clientPtr = drogon::app().getDbClient();
    //同步查询
    Mapper<News> mp(clientPtr);
    std::vector<News> news_list = mp.orderBy(News::Cols::_id).limit(15).offset(0).findAll();
    std::cout << news_list.size() << " rows 111111111111111111111111111!" << std::endl;
    //异步查询
    auto f = clientPtr->execSqlAsyncFuture("select * from news order by create_time desc limit 15");
    auto result = f.get();

    std::cout << typeid(result).name() << std::endl;
    std::cout << result.size() << " rows selected!" << std::endl;

    HttpViewData data;
    data.insert("title", "zxxxxxxxxx");
    data.insert("news1", news_list);
    data.insert("news2", result);

    auto resp = HttpResponse::newHttpViewResponse("Index.csp", data);
    callback(resp);
}

void IndexCtrl::news_detail(const HttpRequestPtr &req,
                            std::function<void(const HttpResponsePtr &)> &&callback, std::string news_id)
{
    //控制台中文异常
    std::system("chcp 65001");

    auto clientPtr = drogon::app().getDbClient();
    //同步查询
    Mapper<News> mp(clientPtr);
    std::vector<News> news1 = mp.findBy(Criteria(News::Cols::_id, CompareOperator::EQ, news_id));
    std::cout << news_id << " rows 111111111111111111111111111!" << std::endl;
    
    std::cout << news1.size() << " rows 111111111111111111111111111!" << std::endl;

    

    HttpViewData data;
    data.insert("title", "zxxxxxxxxx");
    data.insert("news_id", news_id);
    data.insert("news1", news1);

    auto resp = HttpResponse::newHttpViewResponse("NewsDetail.csp", data);

    callback(resp);
}

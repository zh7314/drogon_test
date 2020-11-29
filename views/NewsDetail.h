#include <drogon/DrTemplate.h>
class NewsDetail:public drogon::DrTemplate<NewsDetail>
{
public:
	NewsDetail(){};
	virtual ~NewsDetail(){};
	virtual std::string genText(const drogon::DrTemplateData &) override;
};

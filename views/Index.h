#include <drogon/DrTemplate.h>
class Index:public drogon::DrTemplate<Index>
{
public:
	Index(){};
	virtual ~Index(){};
	virtual std::string genText(const drogon::DrTemplateData &) override;
};

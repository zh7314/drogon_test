/**
 *
 *  SalePointPriceSku.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#include <trantor/utils/Date.h>
#include <trantor/utils/Logger.h>
#include <json/json.h>
#include <string>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

using namespace drogon::orm;
namespace drogon
{
namespace orm
{
class DbClient;
using DbClientPtr = std::shared_ptr<DbClient>;
}
}
namespace drogon_model
{
namespace v2 
{

class SalePointPriceSku
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _shop_id;
        static const std::string _sale_order_sku_id;
        static const std::string _sale_point_price_id;
        static const std::string _point_month;
        static const std::string _point_num;
        static const std::string _point_price;
        static const std::string _premium_water;
        static const std::string _processing_fee;
        static const std::string _settle_price;
        static const std::string _settle_amount;
        static const std::string _pricing_pic;
        static const std::string _remark;
        static const std::string _create_time;
        static const std::string _update_time;
        static const std::string _admin_id;
        static const std::string _is_delete;
        static const std::string _sale_order_id;
        static const std::string _sale_order_key;
    };

    const static int primaryKeyNumber;
    const static std::string tableName;
    const static bool hasPrimaryKey;
    const static std::string primaryKeyName;
    using PrimaryKeyType = uint64_t;
    const PrimaryKeyType &getPrimaryKey() const;

    /**
     * @brief constructor
     * @param r One row of records in the SQL query result.
     * @param indexOffset Set the offset to -1 to access all columns by column names, 
     * otherwise access all columns by offsets.
     * @note If the SQL is not a style of 'select * from table_name ...' (select all 
     * columns by an asterisk), please set the offset to -1.
     */
    explicit SalePointPriceSku(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit SalePointPriceSku(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    SalePointPriceSku(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    SalePointPriceSku() = default;
    
    void updateByJson(const Json::Value &pJson) noexcept(false);
    void updateByMasqueradedJson(const Json::Value &pJson,
                                 const std::vector<std::string> &pMasqueradingVector) noexcept(false);
    static bool validateJsonForCreation(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForCreation(const Json::Value &,
                                                const std::vector<std::string> &pMasqueradingVector,
                                                    std::string &err);
    static bool validateJsonForUpdate(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForUpdate(const Json::Value &,
                                          const std::vector<std::string> &pMasqueradingVector,
                                          std::string &err);
    static bool validJsonOfField(size_t index,
                          const std::string &fieldName,
                          const Json::Value &pJson, 
                          std::string &err, 
                          bool isForCreation);

    /**  For column id  */
    ///Get the value of the column id, returns the default value if the column is null
    const uint64_t &getValueOfId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getId() const noexcept;

    ///Set the value of the column id
    void setId(const uint64_t &pId) noexcept;


    /**  For column shop_id  */
    ///Get the value of the column shop_id, returns the default value if the column is null
    const uint64_t &getValueOfShopId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getShopId() const noexcept;

    ///Set the value of the column shop_id
    void setShopId(const uint64_t &pShopId) noexcept;


    /**  For column sale_order_sku_id  */
    ///Get the value of the column sale_order_sku_id, returns the default value if the column is null
    const int64_t &getValueOfSaleOrderSkuId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getSaleOrderSkuId() const noexcept;

    ///Set the value of the column sale_order_sku_id
    void setSaleOrderSkuId(const int64_t &pSaleOrderSkuId) noexcept;


    /**  For column sale_point_price_id  */
    ///Get the value of the column sale_point_price_id, returns the default value if the column is null
    const uint64_t &getValueOfSalePointPriceId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getSalePointPriceId() const noexcept;

    ///Set the value of the column sale_point_price_id
    void setSalePointPriceId(const uint64_t &pSalePointPriceId) noexcept;


    /**  For column point_month  */
    ///Get the value of the column point_month, returns the default value if the column is null
    const std::string &getValueOfPointMonth() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPointMonth() const noexcept;

    ///Set the value of the column point_month
    void setPointMonth(const std::string &pPointMonth) noexcept;
    void setPointMonth(std::string &&pPointMonth) noexcept;


    /**  For column point_num  */
    ///Get the value of the column point_num, returns the default value if the column is null
    const std::string &getValueOfPointNum() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPointNum() const noexcept;

    ///Set the value of the column point_num
    void setPointNum(const std::string &pPointNum) noexcept;
    void setPointNum(std::string &&pPointNum) noexcept;


    /**  For column point_price  */
    ///Get the value of the column point_price, returns the default value if the column is null
    const std::string &getValueOfPointPrice() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPointPrice() const noexcept;

    ///Set the value of the column point_price
    void setPointPrice(const std::string &pPointPrice) noexcept;
    void setPointPrice(std::string &&pPointPrice) noexcept;


    /**  For column premium_water  */
    ///Get the value of the column premium_water, returns the default value if the column is null
    const std::string &getValueOfPremiumWater() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPremiumWater() const noexcept;

    ///Set the value of the column premium_water
    void setPremiumWater(const std::string &pPremiumWater) noexcept;
    void setPremiumWater(std::string &&pPremiumWater) noexcept;


    /**  For column processing_fee  */
    ///Get the value of the column processing_fee, returns the default value if the column is null
    const std::string &getValueOfProcessingFee() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getProcessingFee() const noexcept;

    ///Set the value of the column processing_fee
    void setProcessingFee(const std::string &pProcessingFee) noexcept;
    void setProcessingFee(std::string &&pProcessingFee) noexcept;


    /**  For column settle_price  */
    ///Get the value of the column settle_price, returns the default value if the column is null
    const std::string &getValueOfSettlePrice() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getSettlePrice() const noexcept;

    ///Set the value of the column settle_price
    void setSettlePrice(const std::string &pSettlePrice) noexcept;
    void setSettlePrice(std::string &&pSettlePrice) noexcept;


    /**  For column settle_amount  */
    ///Get the value of the column settle_amount, returns the default value if the column is null
    const std::string &getValueOfSettleAmount() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getSettleAmount() const noexcept;

    ///Set the value of the column settle_amount
    void setSettleAmount(const std::string &pSettleAmount) noexcept;
    void setSettleAmount(std::string &&pSettleAmount) noexcept;


    /**  For column pricing_pic  */
    ///Get the value of the column pricing_pic, returns the default value if the column is null
    const std::string &getValueOfPricingPic() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPricingPic() const noexcept;

    ///Set the value of the column pricing_pic
    void setPricingPic(const std::string &pPricingPic) noexcept;
    void setPricingPic(std::string &&pPricingPic) noexcept;
    void setPricingPicToNull() noexcept;


    /**  For column remark  */
    ///Get the value of the column remark, returns the default value if the column is null
    const std::string &getValueOfRemark() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getRemark() const noexcept;

    ///Set the value of the column remark
    void setRemark(const std::string &pRemark) noexcept;
    void setRemark(std::string &&pRemark) noexcept;
    void setRemarkToNull() noexcept;


    /**  For column create_time  */
    ///Get the value of the column create_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfCreateTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getCreateTime() const noexcept;

    ///Set the value of the column create_time
    void setCreateTime(const ::trantor::Date &pCreateTime) noexcept;


    /**  For column update_time  */
    ///Get the value of the column update_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfUpdateTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getUpdateTime() const noexcept;

    ///Set the value of the column update_time
    void setUpdateTime(const ::trantor::Date &pUpdateTime) noexcept;


    /**  For column admin_id  */
    ///Get the value of the column admin_id, returns the default value if the column is null
    const uint64_t &getValueOfAdminId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getAdminId() const noexcept;

    ///Set the value of the column admin_id
    void setAdminId(const uint64_t &pAdminId) noexcept;


    /**  For column is_delete  */
    ///Get the value of the column is_delete, returns the default value if the column is null
    const uint8_t &getValueOfIsDelete() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsDelete() const noexcept;

    ///Set the value of the column is_delete
    void setIsDelete(const uint8_t &pIsDelete) noexcept;


    /**  For column sale_order_id  */
    ///Get the value of the column sale_order_id, returns the default value if the column is null
    const int64_t &getValueOfSaleOrderId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getSaleOrderId() const noexcept;

    ///Set the value of the column sale_order_id
    void setSaleOrderId(const int64_t &pSaleOrderId) noexcept;


    /**  For column sale_order_key  */
    ///Get the value of the column sale_order_key, returns the default value if the column is null
    const std::string &getValueOfSaleOrderKey() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getSaleOrderKey() const noexcept;

    ///Set the value of the column sale_order_key
    void setSaleOrderKey(const std::string &pSaleOrderKey) noexcept;
    void setSaleOrderKey(std::string &&pSaleOrderKey) noexcept;
    void setSaleOrderKeyToNull() noexcept;



    static size_t getColumnNumber() noexcept {  return 19;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<SalePointPriceSku>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<uint64_t> id_;
    std::shared_ptr<uint64_t> shopId_;
    std::shared_ptr<int64_t> saleOrderSkuId_;
    std::shared_ptr<uint64_t> salePointPriceId_;
    std::shared_ptr<std::string> pointMonth_;
    std::shared_ptr<std::string> pointNum_;
    std::shared_ptr<std::string> pointPrice_;
    std::shared_ptr<std::string> premiumWater_;
    std::shared_ptr<std::string> processingFee_;
    std::shared_ptr<std::string> settlePrice_;
    std::shared_ptr<std::string> settleAmount_;
    std::shared_ptr<std::string> pricingPic_;
    std::shared_ptr<std::string> remark_;
    std::shared_ptr<::trantor::Date> createTime_;
    std::shared_ptr<::trantor::Date> updateTime_;
    std::shared_ptr<uint64_t> adminId_;
    std::shared_ptr<uint8_t> isDelete_;
    std::shared_ptr<int64_t> saleOrderId_;
    std::shared_ptr<std::string> saleOrderKey_;
    struct MetaData
    {
        const std::string colName_;
        const std::string colType_;
        const std::string colDatabaseType_;
        const ssize_t colLength_;
        const bool isAutoVal_;
        const bool isPrimaryKey_;
        const bool notNull_;
    };
    static const std::vector<MetaData> metaData_;
    bool dirtyFlag_[19]={ false };
  public:
    static const std::string &sqlForFindingByPrimaryKey()
    {
        static const std::string sql="select * from " + tableName + " where id = ?";
        return sql;                   
    }

    static const std::string &sqlForDeletingByPrimaryKey()
    {
        static const std::string sql="delete from " + tableName + " where id = ?";
        return sql;                   
    }
    std::string sqlForInserting(bool &needSelection) const
    {
        std::string sql="insert into " + tableName + " (";
        size_t parametersCount = 0;
        needSelection = false;
            sql += "id,";
            ++parametersCount;
        sql += "shop_id,";
        ++parametersCount;
        if(!dirtyFlag_[1])
        {
            needSelection=true;
        }
        if(dirtyFlag_[2])
        {
            sql += "sale_order_sku_id,";
            ++parametersCount;
        }
        if(dirtyFlag_[3])
        {
            sql += "sale_point_price_id,";
            ++parametersCount;
        }
        sql += "point_month,";
        ++parametersCount;
        if(!dirtyFlag_[4])
        {
            needSelection=true;
        }
        sql += "point_num,";
        ++parametersCount;
        if(!dirtyFlag_[5])
        {
            needSelection=true;
        }
        sql += "point_price,";
        ++parametersCount;
        if(!dirtyFlag_[6])
        {
            needSelection=true;
        }
        sql += "premium_water,";
        ++parametersCount;
        if(!dirtyFlag_[7])
        {
            needSelection=true;
        }
        sql += "processing_fee,";
        ++parametersCount;
        if(!dirtyFlag_[8])
        {
            needSelection=true;
        }
        sql += "settle_price,";
        ++parametersCount;
        if(!dirtyFlag_[9])
        {
            needSelection=true;
        }
        sql += "settle_amount,";
        ++parametersCount;
        if(!dirtyFlag_[10])
        {
            needSelection=true;
        }
        if(dirtyFlag_[11])
        {
            sql += "pricing_pic,";
            ++parametersCount;
        }
        if(dirtyFlag_[12])
        {
            sql += "remark,";
            ++parametersCount;
        }
        sql += "create_time,";
        ++parametersCount;
        if(!dirtyFlag_[13])
        {
            needSelection=true;
        }
        sql += "update_time,";
        ++parametersCount;
        if(!dirtyFlag_[14])
        {
            needSelection=true;
        }
        sql += "admin_id,";
        ++parametersCount;
        if(!dirtyFlag_[15])
        {
            needSelection=true;
        }
        sql += "is_delete,";
        ++parametersCount;
        if(!dirtyFlag_[16])
        {
            needSelection=true;
        }
        sql += "sale_order_id,";
        ++parametersCount;
        if(!dirtyFlag_[17])
        {
            needSelection=true;
        }
        if(dirtyFlag_[18])
        {
            sql += "sale_order_key,";
            ++parametersCount;
        }
        needSelection=true;
        if(parametersCount > 0)
        {
            sql[sql.length()-1]=')';
            sql += " values (";
        }
        else
            sql += ") values (";
        
        sql +="default,";
        if(dirtyFlag_[1])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[2])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[3])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[4])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[5])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[6])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[7])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[8])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[9])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[10])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[11])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[12])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[13])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[14])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[15])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[16])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[17])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[18])
        {
            sql.append("?,");

        } 
        if(parametersCount > 0)
        {
            sql.resize(sql.length() - 1);
        }
        sql.append(1, ')');
        LOG_TRACE << sql;
        return sql;   
    }
};
} // namespace v2
} // namespace drogon_model

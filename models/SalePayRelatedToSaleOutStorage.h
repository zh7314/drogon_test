/**
 *
 *  SalePayRelatedToSaleOutStorage.h
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

class SalePayRelatedToSaleOutStorage
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _admin_id;
        static const std::string _shop_id;
        static const std::string _create_time;
        static const std::string _update_time;
        static const std::string _sale_out_storage_sku_id;
        static const std::string _sale_pay_record_id;
        static const std::string _product_id;
        static const std::string _num;
        static const std::string _is_delete;
        static const std::string _amount;
        static const std::string _price;
        static const std::string _return_sale_pay_related_id;
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
    explicit SalePayRelatedToSaleOutStorage(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit SalePayRelatedToSaleOutStorage(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    SalePayRelatedToSaleOutStorage(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    SalePayRelatedToSaleOutStorage() = default;
    
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


    /**  For column admin_id  */
    ///Get the value of the column admin_id, returns the default value if the column is null
    const uint64_t &getValueOfAdminId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getAdminId() const noexcept;

    ///Set the value of the column admin_id
    void setAdminId(const uint64_t &pAdminId) noexcept;


    /**  For column shop_id  */
    ///Get the value of the column shop_id, returns the default value if the column is null
    const uint64_t &getValueOfShopId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getShopId() const noexcept;

    ///Set the value of the column shop_id
    void setShopId(const uint64_t &pShopId) noexcept;


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


    /**  For column sale_out_storage_sku_id  */
    ///Get the value of the column sale_out_storage_sku_id, returns the default value if the column is null
    const int64_t &getValueOfSaleOutStorageSkuId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getSaleOutStorageSkuId() const noexcept;

    ///Set the value of the column sale_out_storage_sku_id
    void setSaleOutStorageSkuId(const int64_t &pSaleOutStorageSkuId) noexcept;


    /**  For column sale_pay_record_id  */
    ///Get the value of the column sale_pay_record_id, returns the default value if the column is null
    const int64_t &getValueOfSalePayRecordId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getSalePayRecordId() const noexcept;

    ///Set the value of the column sale_pay_record_id
    void setSalePayRecordId(const int64_t &pSalePayRecordId) noexcept;


    /**  For column product_id  */
    ///Get the value of the column product_id, returns the default value if the column is null
    const int64_t &getValueOfProductId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getProductId() const noexcept;

    ///Set the value of the column product_id
    void setProductId(const int64_t &pProductId) noexcept;


    /**  For column num  */
    ///Get the value of the column num, returns the default value if the column is null
    const std::string &getValueOfNum() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getNum() const noexcept;

    ///Set the value of the column num
    void setNum(const std::string &pNum) noexcept;
    void setNum(std::string &&pNum) noexcept;


    /**  For column is_delete  */
    ///Get the value of the column is_delete, returns the default value if the column is null
    const int8_t &getValueOfIsDelete() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int8_t> &getIsDelete() const noexcept;

    ///Set the value of the column is_delete
    void setIsDelete(const int8_t &pIsDelete) noexcept;


    /**  For column amount  */
    ///Get the value of the column amount, returns the default value if the column is null
    const std::string &getValueOfAmount() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAmount() const noexcept;

    ///Set the value of the column amount
    void setAmount(const std::string &pAmount) noexcept;
    void setAmount(std::string &&pAmount) noexcept;


    /**  For column price  */
    ///Get the value of the column price, returns the default value if the column is null
    const std::string &getValueOfPrice() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPrice() const noexcept;

    ///Set the value of the column price
    void setPrice(const std::string &pPrice) noexcept;
    void setPrice(std::string &&pPrice) noexcept;


    /**  For column return_sale_pay_related_id  */
    ///Get the value of the column return_sale_pay_related_id, returns the default value if the column is null
    const uint64_t &getValueOfReturnSalePayRelatedId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getReturnSalePayRelatedId() const noexcept;

    ///Set the value of the column return_sale_pay_related_id
    void setReturnSalePayRelatedId(const uint64_t &pReturnSalePayRelatedId) noexcept;


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



    static size_t getColumnNumber() noexcept {  return 15;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<SalePayRelatedToSaleOutStorage>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<uint64_t> id_;
    std::shared_ptr<uint64_t> adminId_;
    std::shared_ptr<uint64_t> shopId_;
    std::shared_ptr<::trantor::Date> createTime_;
    std::shared_ptr<::trantor::Date> updateTime_;
    std::shared_ptr<int64_t> saleOutStorageSkuId_;
    std::shared_ptr<int64_t> salePayRecordId_;
    std::shared_ptr<int64_t> productId_;
    std::shared_ptr<std::string> num_;
    std::shared_ptr<int8_t> isDelete_;
    std::shared_ptr<std::string> amount_;
    std::shared_ptr<std::string> price_;
    std::shared_ptr<uint64_t> returnSalePayRelatedId_;
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
    bool dirtyFlag_[15]={ false };
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
        sql += "admin_id,";
        ++parametersCount;
        if(!dirtyFlag_[1])
        {
            needSelection=true;
        }
        sql += "shop_id,";
        ++parametersCount;
        if(!dirtyFlag_[2])
        {
            needSelection=true;
        }
        sql += "create_time,";
        ++parametersCount;
        if(!dirtyFlag_[3])
        {
            needSelection=true;
        }
        sql += "update_time,";
        ++parametersCount;
        if(!dirtyFlag_[4])
        {
            needSelection=true;
        }
        if(dirtyFlag_[5])
        {
            sql += "sale_out_storage_sku_id,";
            ++parametersCount;
        }
        if(dirtyFlag_[6])
        {
            sql += "sale_pay_record_id,";
            ++parametersCount;
        }
        sql += "product_id,";
        ++parametersCount;
        if(!dirtyFlag_[7])
        {
            needSelection=true;
        }
        sql += "num,";
        ++parametersCount;
        if(!dirtyFlag_[8])
        {
            needSelection=true;
        }
        sql += "is_delete,";
        ++parametersCount;
        if(!dirtyFlag_[9])
        {
            needSelection=true;
        }
        sql += "amount,";
        ++parametersCount;
        if(!dirtyFlag_[10])
        {
            needSelection=true;
        }
        sql += "price,";
        ++parametersCount;
        if(!dirtyFlag_[11])
        {
            needSelection=true;
        }
        sql += "return_sale_pay_related_id,";
        ++parametersCount;
        if(!dirtyFlag_[12])
        {
            needSelection=true;
        }
        sql += "sale_order_id,";
        ++parametersCount;
        if(!dirtyFlag_[13])
        {
            needSelection=true;
        }
        if(dirtyFlag_[14])
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
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[3])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
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
        if(dirtyFlag_[6])
        {
            sql.append("?,");

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
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[12])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
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

/**
 *
 *  PurchaseInStorageSku.h
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

class PurchaseInStorageSku
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _shop_id;
        static const std::string _purchase_in_storage_id;
        static const std::string _purchase_order_sku_id;
        static const std::string _product_id;
        static const std::string _storage_number;
        static const std::string _settle_number;
        static const std::string _stock_number;
        static const std::string _remark;
        static const std::string _admin_id;
        static const std::string _is_delete;
        static const std::string _batch;
        static const std::string _create_time;
        static const std::string _update_time;
        static const std::string _purchase_order_id;
        static const std::string _purchase_order_key;
        static const std::string _storage_status;
        static const std::string _storage_price;
        static const std::string _check_invoice_number;
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
    explicit PurchaseInStorageSku(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit PurchaseInStorageSku(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    PurchaseInStorageSku(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    PurchaseInStorageSku() = default;
    
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


    /**  For column purchase_in_storage_id  */
    ///Get the value of the column purchase_in_storage_id, returns the default value if the column is null
    const uint64_t &getValueOfPurchaseInStorageId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getPurchaseInStorageId() const noexcept;

    ///Set the value of the column purchase_in_storage_id
    void setPurchaseInStorageId(const uint64_t &pPurchaseInStorageId) noexcept;


    /**  For column purchase_order_sku_id  */
    ///Get the value of the column purchase_order_sku_id, returns the default value if the column is null
    const uint64_t &getValueOfPurchaseOrderSkuId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getPurchaseOrderSkuId() const noexcept;

    ///Set the value of the column purchase_order_sku_id
    void setPurchaseOrderSkuId(const uint64_t &pPurchaseOrderSkuId) noexcept;


    /**  For column product_id  */
    ///Get the value of the column product_id, returns the default value if the column is null
    const uint64_t &getValueOfProductId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getProductId() const noexcept;

    ///Set the value of the column product_id
    void setProductId(const uint64_t &pProductId) noexcept;


    /**  For column storage_number  */
    ///Get the value of the column storage_number, returns the default value if the column is null
    const std::string &getValueOfStorageNumber() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getStorageNumber() const noexcept;

    ///Set the value of the column storage_number
    void setStorageNumber(const std::string &pStorageNumber) noexcept;
    void setStorageNumber(std::string &&pStorageNumber) noexcept;


    /**  For column settle_number  */
    ///Get the value of the column settle_number, returns the default value if the column is null
    const std::string &getValueOfSettleNumber() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getSettleNumber() const noexcept;

    ///Set the value of the column settle_number
    void setSettleNumber(const std::string &pSettleNumber) noexcept;
    void setSettleNumber(std::string &&pSettleNumber) noexcept;


    /**  For column stock_number  */
    ///Get the value of the column stock_number, returns the default value if the column is null
    const std::string &getValueOfStockNumber() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getStockNumber() const noexcept;

    ///Set the value of the column stock_number
    void setStockNumber(const std::string &pStockNumber) noexcept;
    void setStockNumber(std::string &&pStockNumber) noexcept;


    /**  For column remark  */
    ///Get the value of the column remark, returns the default value if the column is null
    const std::string &getValueOfRemark() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getRemark() const noexcept;

    ///Set the value of the column remark
    void setRemark(const std::string &pRemark) noexcept;
    void setRemark(std::string &&pRemark) noexcept;
    void setRemarkToNull() noexcept;


    /**  For column admin_id  */
    ///Get the value of the column admin_id, returns the default value if the column is null
    const int64_t &getValueOfAdminId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getAdminId() const noexcept;

    ///Set the value of the column admin_id
    void setAdminId(const int64_t &pAdminId) noexcept;


    /**  For column is_delete  */
    ///Get the value of the column is_delete, returns the default value if the column is null
    const uint8_t &getValueOfIsDelete() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsDelete() const noexcept;

    ///Set the value of the column is_delete
    void setIsDelete(const uint8_t &pIsDelete) noexcept;


    /**  For column batch  */
    ///Get the value of the column batch, returns the default value if the column is null
    const std::string &getValueOfBatch() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getBatch() const noexcept;

    ///Set the value of the column batch
    void setBatch(const std::string &pBatch) noexcept;
    void setBatch(std::string &&pBatch) noexcept;
    void setBatchToNull() noexcept;


    /**  For column create_time  */
    ///Get the value of the column create_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfCreateTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getCreateTime() const noexcept;

    ///Set the value of the column create_time
    void setCreateTime(const ::trantor::Date &pCreateTime) noexcept;
    void setCreateTimeToNull() noexcept;


    /**  For column update_time  */
    ///Get the value of the column update_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfUpdateTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getUpdateTime() const noexcept;

    ///Set the value of the column update_time
    void setUpdateTime(const ::trantor::Date &pUpdateTime) noexcept;
    void setUpdateTimeToNull() noexcept;


    /**  For column purchase_order_id  */
    ///Get the value of the column purchase_order_id, returns the default value if the column is null
    const int64_t &getValueOfPurchaseOrderId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getPurchaseOrderId() const noexcept;

    ///Set the value of the column purchase_order_id
    void setPurchaseOrderId(const int64_t &pPurchaseOrderId) noexcept;


    /**  For column purchase_order_key  */
    ///Get the value of the column purchase_order_key, returns the default value if the column is null
    const std::string &getValueOfPurchaseOrderKey() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPurchaseOrderKey() const noexcept;

    ///Set the value of the column purchase_order_key
    void setPurchaseOrderKey(const std::string &pPurchaseOrderKey) noexcept;
    void setPurchaseOrderKey(std::string &&pPurchaseOrderKey) noexcept;
    void setPurchaseOrderKeyToNull() noexcept;


    /**  For column storage_status  */
    ///Get the value of the column storage_status, returns the default value if the column is null
    const uint8_t &getValueOfStorageStatus() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getStorageStatus() const noexcept;

    ///Set the value of the column storage_status
    void setStorageStatus(const uint8_t &pStorageStatus) noexcept;


    /**  For column storage_price  */
    ///Get the value of the column storage_price, returns the default value if the column is null
    const std::string &getValueOfStoragePrice() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getStoragePrice() const noexcept;

    ///Set the value of the column storage_price
    void setStoragePrice(const std::string &pStoragePrice) noexcept;
    void setStoragePrice(std::string &&pStoragePrice) noexcept;


    /**  For column check_invoice_number  */
    ///Get the value of the column check_invoice_number, returns the default value if the column is null
    const std::string &getValueOfCheckInvoiceNumber() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getCheckInvoiceNumber() const noexcept;

    ///Set the value of the column check_invoice_number
    void setCheckInvoiceNumber(const std::string &pCheckInvoiceNumber) noexcept;
    void setCheckInvoiceNumber(std::string &&pCheckInvoiceNumber) noexcept;



    static size_t getColumnNumber() noexcept {  return 19;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<PurchaseInStorageSku>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<uint64_t> id_;
    std::shared_ptr<uint64_t> shopId_;
    std::shared_ptr<uint64_t> purchaseInStorageId_;
    std::shared_ptr<uint64_t> purchaseOrderSkuId_;
    std::shared_ptr<uint64_t> productId_;
    std::shared_ptr<std::string> storageNumber_;
    std::shared_ptr<std::string> settleNumber_;
    std::shared_ptr<std::string> stockNumber_;
    std::shared_ptr<std::string> remark_;
    std::shared_ptr<int64_t> adminId_;
    std::shared_ptr<uint8_t> isDelete_;
    std::shared_ptr<std::string> batch_;
    std::shared_ptr<::trantor::Date> createTime_;
    std::shared_ptr<::trantor::Date> updateTime_;
    std::shared_ptr<int64_t> purchaseOrderId_;
    std::shared_ptr<std::string> purchaseOrderKey_;
    std::shared_ptr<uint8_t> storageStatus_;
    std::shared_ptr<std::string> storagePrice_;
    std::shared_ptr<std::string> checkInvoiceNumber_;
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
        sql += "purchase_in_storage_id,";
        ++parametersCount;
        if(!dirtyFlag_[2])
        {
            needSelection=true;
        }
        sql += "purchase_order_sku_id,";
        ++parametersCount;
        if(!dirtyFlag_[3])
        {
            needSelection=true;
        }
        sql += "product_id,";
        ++parametersCount;
        if(!dirtyFlag_[4])
        {
            needSelection=true;
        }
        sql += "storage_number,";
        ++parametersCount;
        if(!dirtyFlag_[5])
        {
            needSelection=true;
        }
        sql += "settle_number,";
        ++parametersCount;
        if(!dirtyFlag_[6])
        {
            needSelection=true;
        }
        sql += "stock_number,";
        ++parametersCount;
        if(!dirtyFlag_[7])
        {
            needSelection=true;
        }
        if(dirtyFlag_[8])
        {
            sql += "remark,";
            ++parametersCount;
        }
        sql += "admin_id,";
        ++parametersCount;
        if(!dirtyFlag_[9])
        {
            needSelection=true;
        }
        sql += "is_delete,";
        ++parametersCount;
        if(!dirtyFlag_[10])
        {
            needSelection=true;
        }
        if(dirtyFlag_[11])
        {
            sql += "batch,";
            ++parametersCount;
        }
        if(dirtyFlag_[12])
        {
            sql += "create_time,";
            ++parametersCount;
        }
        if(dirtyFlag_[13])
        {
            sql += "update_time,";
            ++parametersCount;
        }
        sql += "purchase_order_id,";
        ++parametersCount;
        if(!dirtyFlag_[14])
        {
            needSelection=true;
        }
        if(dirtyFlag_[15])
        {
            sql += "purchase_order_key,";
            ++parametersCount;
        }
        sql += "storage_status,";
        ++parametersCount;
        if(!dirtyFlag_[16])
        {
            needSelection=true;
        }
        sql += "storage_price,";
        ++parametersCount;
        if(!dirtyFlag_[17])
        {
            needSelection=true;
        }
        sql += "check_invoice_number,";
        ++parametersCount;
        if(!dirtyFlag_[18])
        {
            needSelection=true;
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
        else
        {
            sql +="default,";
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

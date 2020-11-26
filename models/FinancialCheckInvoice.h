/**
 *
 *  FinancialCheckInvoice.h
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

class FinancialCheckInvoice
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _invoice_type;
        static const std::string _in_out_storage_id;
        static const std::string _in_out_storage_sku_id;
        static const std::string _shop_id;
        static const std::string _admin_id;
        static const std::string _create_time;
        static const std::string _update_time;
        static const std::string _is_delete;
        static const std::string _remark;
        static const std::string _is_check;
        static const std::string _check_invoice_date;
        static const std::string _check_invoice_price;
        static const std::string _check_invoice_number;
        static const std::string _product_category_id;
        static const std::string _in_out_storage_date;
        static const std::string _company_id;
        static const std::string _order_key;
        static const std::string _confirm_check_invoice_date;
        static const std::string _confirm_check_invoice_price;
        static const std::string _confirm_check_invoice_number;
        static const std::string _confirm_status;
    };

    const static int primaryKeyNumber;
    const static std::string tableName;
    const static bool hasPrimaryKey;
    const static std::string primaryKeyName;
    using PrimaryKeyType = int64_t;
    const PrimaryKeyType &getPrimaryKey() const;

    /**
     * @brief constructor
     * @param r One row of records in the SQL query result.
     * @param indexOffset Set the offset to -1 to access all columns by column names, 
     * otherwise access all columns by offsets.
     * @note If the SQL is not a style of 'select * from table_name ...' (select all 
     * columns by an asterisk), please set the offset to -1.
     */
    explicit FinancialCheckInvoice(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit FinancialCheckInvoice(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    FinancialCheckInvoice(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    FinancialCheckInvoice() = default;
    
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
    const int64_t &getValueOfId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getId() const noexcept;

    ///Set the value of the column id
    void setId(const int64_t &pId) noexcept;


    /**  For column invoice_type  */
    ///Get the value of the column invoice_type, returns the default value if the column is null
    const uint8_t &getValueOfInvoiceType() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getInvoiceType() const noexcept;

    ///Set the value of the column invoice_type
    void setInvoiceType(const uint8_t &pInvoiceType) noexcept;


    /**  For column in_out_storage_id  */
    ///Get the value of the column in_out_storage_id, returns the default value if the column is null
    const uint64_t &getValueOfInOutStorageId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getInOutStorageId() const noexcept;

    ///Set the value of the column in_out_storage_id
    void setInOutStorageId(const uint64_t &pInOutStorageId) noexcept;


    /**  For column in_out_storage_sku_id  */
    ///Get the value of the column in_out_storage_sku_id, returns the default value if the column is null
    const uint64_t &getValueOfInOutStorageSkuId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getInOutStorageSkuId() const noexcept;

    ///Set the value of the column in_out_storage_sku_id
    void setInOutStorageSkuId(const uint64_t &pInOutStorageSkuId) noexcept;


    /**  For column shop_id  */
    ///Get the value of the column shop_id, returns the default value if the column is null
    const uint64_t &getValueOfShopId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getShopId() const noexcept;

    ///Set the value of the column shop_id
    void setShopId(const uint64_t &pShopId) noexcept;


    /**  For column admin_id  */
    ///Get the value of the column admin_id, returns the default value if the column is null
    const uint64_t &getValueOfAdminId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getAdminId() const noexcept;

    ///Set the value of the column admin_id
    void setAdminId(const uint64_t &pAdminId) noexcept;


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


    /**  For column is_delete  */
    ///Get the value of the column is_delete, returns the default value if the column is null
    const uint8_t &getValueOfIsDelete() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsDelete() const noexcept;

    ///Set the value of the column is_delete
    void setIsDelete(const uint8_t &pIsDelete) noexcept;


    /**  For column remark  */
    ///Get the value of the column remark, returns the default value if the column is null
    const std::string &getValueOfRemark() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getRemark() const noexcept;

    ///Set the value of the column remark
    void setRemark(const std::string &pRemark) noexcept;
    void setRemark(std::string &&pRemark) noexcept;
    void setRemarkToNull() noexcept;


    /**  For column is_check  */
    ///Get the value of the column is_check, returns the default value if the column is null
    const uint8_t &getValueOfIsCheck() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsCheck() const noexcept;

    ///Set the value of the column is_check
    void setIsCheck(const uint8_t &pIsCheck) noexcept;


    /**  For column check_invoice_date  */
    ///Get the value of the column check_invoice_date, returns the default value if the column is null
    const ::trantor::Date &getValueOfCheckInvoiceDate() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getCheckInvoiceDate() const noexcept;

    ///Set the value of the column check_invoice_date
    void setCheckInvoiceDate(const ::trantor::Date &pCheckInvoiceDate) noexcept;


    /**  For column check_invoice_price  */
    ///Get the value of the column check_invoice_price, returns the default value if the column is null
    const std::string &getValueOfCheckInvoicePrice() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getCheckInvoicePrice() const noexcept;

    ///Set the value of the column check_invoice_price
    void setCheckInvoicePrice(const std::string &pCheckInvoicePrice) noexcept;
    void setCheckInvoicePrice(std::string &&pCheckInvoicePrice) noexcept;


    /**  For column check_invoice_number  */
    ///Get the value of the column check_invoice_number, returns the default value if the column is null
    const std::string &getValueOfCheckInvoiceNumber() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getCheckInvoiceNumber() const noexcept;

    ///Set the value of the column check_invoice_number
    void setCheckInvoiceNumber(const std::string &pCheckInvoiceNumber) noexcept;
    void setCheckInvoiceNumber(std::string &&pCheckInvoiceNumber) noexcept;


    /**  For column product_category_id  */
    ///Get the value of the column product_category_id, returns the default value if the column is null
    const int64_t &getValueOfProductCategoryId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getProductCategoryId() const noexcept;

    ///Set the value of the column product_category_id
    void setProductCategoryId(const int64_t &pProductCategoryId) noexcept;


    /**  For column in_out_storage_date  */
    ///Get the value of the column in_out_storage_date, returns the default value if the column is null
    const ::trantor::Date &getValueOfInOutStorageDate() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getInOutStorageDate() const noexcept;

    ///Set the value of the column in_out_storage_date
    void setInOutStorageDate(const ::trantor::Date &pInOutStorageDate) noexcept;


    /**  For column company_id  */
    ///Get the value of the column company_id, returns the default value if the column is null
    const int64_t &getValueOfCompanyId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getCompanyId() const noexcept;

    ///Set the value of the column company_id
    void setCompanyId(const int64_t &pCompanyId) noexcept;


    /**  For column order_key  */
    ///Get the value of the column order_key, returns the default value if the column is null
    const std::string &getValueOfOrderKey() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getOrderKey() const noexcept;

    ///Set the value of the column order_key
    void setOrderKey(const std::string &pOrderKey) noexcept;
    void setOrderKey(std::string &&pOrderKey) noexcept;
    void setOrderKeyToNull() noexcept;


    /**  For column confirm_check_invoice_date  */
    ///Get the value of the column confirm_check_invoice_date, returns the default value if the column is null
    const ::trantor::Date &getValueOfConfirmCheckInvoiceDate() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getConfirmCheckInvoiceDate() const noexcept;

    ///Set the value of the column confirm_check_invoice_date
    void setConfirmCheckInvoiceDate(const ::trantor::Date &pConfirmCheckInvoiceDate) noexcept;
    void setConfirmCheckInvoiceDateToNull() noexcept;


    /**  For column confirm_check_invoice_price  */
    ///Get the value of the column confirm_check_invoice_price, returns the default value if the column is null
    const std::string &getValueOfConfirmCheckInvoicePrice() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getConfirmCheckInvoicePrice() const noexcept;

    ///Set the value of the column confirm_check_invoice_price
    void setConfirmCheckInvoicePrice(const std::string &pConfirmCheckInvoicePrice) noexcept;
    void setConfirmCheckInvoicePrice(std::string &&pConfirmCheckInvoicePrice) noexcept;
    void setConfirmCheckInvoicePriceToNull() noexcept;


    /**  For column confirm_check_invoice_number  */
    ///Get the value of the column confirm_check_invoice_number, returns the default value if the column is null
    const std::string &getValueOfConfirmCheckInvoiceNumber() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getConfirmCheckInvoiceNumber() const noexcept;

    ///Set the value of the column confirm_check_invoice_number
    void setConfirmCheckInvoiceNumber(const std::string &pConfirmCheckInvoiceNumber) noexcept;
    void setConfirmCheckInvoiceNumber(std::string &&pConfirmCheckInvoiceNumber) noexcept;
    void setConfirmCheckInvoiceNumberToNull() noexcept;


    /**  For column confirm_status  */
    ///Get the value of the column confirm_status, returns the default value if the column is null
    const uint8_t &getValueOfConfirmStatus() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getConfirmStatus() const noexcept;

    ///Set the value of the column confirm_status
    void setConfirmStatus(const uint8_t &pConfirmStatus) noexcept;



    static size_t getColumnNumber() noexcept {  return 22;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<FinancialCheckInvoice>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<int64_t> id_;
    std::shared_ptr<uint8_t> invoiceType_;
    std::shared_ptr<uint64_t> inOutStorageId_;
    std::shared_ptr<uint64_t> inOutStorageSkuId_;
    std::shared_ptr<uint64_t> shopId_;
    std::shared_ptr<uint64_t> adminId_;
    std::shared_ptr<::trantor::Date> createTime_;
    std::shared_ptr<::trantor::Date> updateTime_;
    std::shared_ptr<uint8_t> isDelete_;
    std::shared_ptr<std::string> remark_;
    std::shared_ptr<uint8_t> isCheck_;
    std::shared_ptr<::trantor::Date> checkInvoiceDate_;
    std::shared_ptr<std::string> checkInvoicePrice_;
    std::shared_ptr<std::string> checkInvoiceNumber_;
    std::shared_ptr<int64_t> productCategoryId_;
    std::shared_ptr<::trantor::Date> inOutStorageDate_;
    std::shared_ptr<int64_t> companyId_;
    std::shared_ptr<std::string> orderKey_;
    std::shared_ptr<::trantor::Date> confirmCheckInvoiceDate_;
    std::shared_ptr<std::string> confirmCheckInvoicePrice_;
    std::shared_ptr<std::string> confirmCheckInvoiceNumber_;
    std::shared_ptr<uint8_t> confirmStatus_;
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
    bool dirtyFlag_[22]={ false };
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
        sql += "invoice_type,";
        ++parametersCount;
        if(!dirtyFlag_[1])
        {
            needSelection=true;
        }
        sql += "in_out_storage_id,";
        ++parametersCount;
        if(!dirtyFlag_[2])
        {
            needSelection=true;
        }
        sql += "in_out_storage_sku_id,";
        ++parametersCount;
        if(!dirtyFlag_[3])
        {
            needSelection=true;
        }
        sql += "shop_id,";
        ++parametersCount;
        if(!dirtyFlag_[4])
        {
            needSelection=true;
        }
        sql += "admin_id,";
        ++parametersCount;
        if(!dirtyFlag_[5])
        {
            needSelection=true;
        }
        if(dirtyFlag_[6])
        {
            sql += "create_time,";
            ++parametersCount;
        }
        if(dirtyFlag_[7])
        {
            sql += "update_time,";
            ++parametersCount;
        }
        sql += "is_delete,";
        ++parametersCount;
        if(!dirtyFlag_[8])
        {
            needSelection=true;
        }
        if(dirtyFlag_[9])
        {
            sql += "remark,";
            ++parametersCount;
        }
        sql += "is_check,";
        ++parametersCount;
        if(!dirtyFlag_[10])
        {
            needSelection=true;
        }
        sql += "check_invoice_date,";
        ++parametersCount;
        if(!dirtyFlag_[11])
        {
            needSelection=true;
        }
        sql += "check_invoice_price,";
        ++parametersCount;
        if(!dirtyFlag_[12])
        {
            needSelection=true;
        }
        sql += "check_invoice_number,";
        ++parametersCount;
        if(!dirtyFlag_[13])
        {
            needSelection=true;
        }
        sql += "product_category_id,";
        ++parametersCount;
        if(!dirtyFlag_[14])
        {
            needSelection=true;
        }
        sql += "in_out_storage_date,";
        ++parametersCount;
        if(!dirtyFlag_[15])
        {
            needSelection=true;
        }
        sql += "company_id,";
        ++parametersCount;
        if(!dirtyFlag_[16])
        {
            needSelection=true;
        }
        if(dirtyFlag_[17])
        {
            sql += "order_key,";
            ++parametersCount;
        }
        if(dirtyFlag_[18])
        {
            sql += "confirm_check_invoice_date,";
            ++parametersCount;
        }
        sql += "confirm_check_invoice_price,";
        ++parametersCount;
        if(!dirtyFlag_[19])
        {
            needSelection=true;
        }
        sql += "confirm_check_invoice_number,";
        ++parametersCount;
        if(!dirtyFlag_[20])
        {
            needSelection=true;
        }
        sql += "confirm_status,";
        ++parametersCount;
        if(!dirtyFlag_[21])
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
        if(dirtyFlag_[7])
        {
            sql.append("?,");

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
        if(dirtyFlag_[18])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[19])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[20])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[21])
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

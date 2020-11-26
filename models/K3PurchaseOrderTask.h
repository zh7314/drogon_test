/**
 *
 *  K3PurchaseOrderTask.h
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

class K3PurchaseOrderTask
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _purchase_order_id;
        static const std::string _purchase_order_key;
        static const std::string _supplier_id;
        static const std::string _emp_name;
        static const std::string _date_time;
        static const std::string _lines;
        static const std::string _status;
        static const std::string _comment;
        static const std::string _remark;
        static const std::string _create_time;
        static const std::string _update_time;
        static const std::string _version;
        static const std::string _is_cancel;
        static const std::string _type;
        static const std::string _shop_id;
        static const std::string _is_delete;
        static const std::string _admin_id;
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
    explicit K3PurchaseOrderTask(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit K3PurchaseOrderTask(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    K3PurchaseOrderTask(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    K3PurchaseOrderTask() = default;
    
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


    /**  For column purchase_order_id  */
    ///Get the value of the column purchase_order_id, returns the default value if the column is null
    const uint64_t &getValueOfPurchaseOrderId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getPurchaseOrderId() const noexcept;

    ///Set the value of the column purchase_order_id
    void setPurchaseOrderId(const uint64_t &pPurchaseOrderId) noexcept;


    /**  For column purchase_order_key  */
    ///Get the value of the column purchase_order_key, returns the default value if the column is null
    const std::string &getValueOfPurchaseOrderKey() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPurchaseOrderKey() const noexcept;

    ///Set the value of the column purchase_order_key
    void setPurchaseOrderKey(const std::string &pPurchaseOrderKey) noexcept;
    void setPurchaseOrderKey(std::string &&pPurchaseOrderKey) noexcept;


    /**  For column supplier_id  */
    ///Get the value of the column supplier_id, returns the default value if the column is null
    const int32_t &getValueOfSupplierId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getSupplierId() const noexcept;

    ///Set the value of the column supplier_id
    void setSupplierId(const int32_t &pSupplierId) noexcept;


    /**  For column emp_name  */
    ///Get the value of the column emp_name, returns the default value if the column is null
    const std::string &getValueOfEmpName() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getEmpName() const noexcept;

    ///Set the value of the column emp_name
    void setEmpName(const std::string &pEmpName) noexcept;
    void setEmpName(std::string &&pEmpName) noexcept;


    /**  For column date_time  */
    ///Get the value of the column date_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfDateTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getDateTime() const noexcept;

    ///Set the value of the column date_time
    void setDateTime(const ::trantor::Date &pDateTime) noexcept;


    /**  For column lines  */
    ///Get the value of the column lines, returns the default value if the column is null
    const std::string &getValueOfLines() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getLines() const noexcept;

    ///Set the value of the column lines
    void setLines(const std::string &pLines) noexcept;
    void setLines(std::string &&pLines) noexcept;


    /**  For column status  */
    ///Get the value of the column status, returns the default value if the column is null
    const int8_t &getValueOfStatus() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int8_t> &getStatus() const noexcept;

    ///Set the value of the column status
    void setStatus(const int8_t &pStatus) noexcept;


    /**  For column comment  */
    ///Get the value of the column comment, returns the default value if the column is null
    const std::string &getValueOfComment() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getComment() const noexcept;

    ///Set the value of the column comment
    void setComment(const std::string &pComment) noexcept;
    void setComment(std::string &&pComment) noexcept;
    void setCommentToNull() noexcept;


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
    void setCreateTimeToNull() noexcept;


    /**  For column update_time  */
    ///Get the value of the column update_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfUpdateTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getUpdateTime() const noexcept;

    ///Set the value of the column update_time
    void setUpdateTime(const ::trantor::Date &pUpdateTime) noexcept;
    void setUpdateTimeToNull() noexcept;


    /**  For column version  */
    ///Get the value of the column version, returns the default value if the column is null
    const int32_t &getValueOfVersion() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getVersion() const noexcept;

    ///Set the value of the column version
    void setVersion(const int32_t &pVersion) noexcept;


    /**  For column is_cancel  */
    ///Get the value of the column is_cancel, returns the default value if the column is null
    const uint8_t &getValueOfIsCancel() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsCancel() const noexcept;

    ///Set the value of the column is_cancel
    void setIsCancel(const uint8_t &pIsCancel) noexcept;


    /**  For column type  */
    ///Get the value of the column type, returns the default value if the column is null
    const uint8_t &getValueOfType() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getType() const noexcept;

    ///Set the value of the column type
    void setType(const uint8_t &pType) noexcept;


    /**  For column shop_id  */
    ///Get the value of the column shop_id, returns the default value if the column is null
    const uint64_t &getValueOfShopId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getShopId() const noexcept;

    ///Set the value of the column shop_id
    void setShopId(const uint64_t &pShopId) noexcept;


    /**  For column is_delete  */
    ///Get the value of the column is_delete, returns the default value if the column is null
    const uint8_t &getValueOfIsDelete() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsDelete() const noexcept;

    ///Set the value of the column is_delete
    void setIsDelete(const uint8_t &pIsDelete) noexcept;


    /**  For column admin_id  */
    ///Get the value of the column admin_id, returns the default value if the column is null
    const uint64_t &getValueOfAdminId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getAdminId() const noexcept;

    ///Set the value of the column admin_id
    void setAdminId(const uint64_t &pAdminId) noexcept;



    static size_t getColumnNumber() noexcept {  return 18;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<K3PurchaseOrderTask>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<uint64_t> id_;
    std::shared_ptr<uint64_t> purchaseOrderId_;
    std::shared_ptr<std::string> purchaseOrderKey_;
    std::shared_ptr<int32_t> supplierId_;
    std::shared_ptr<std::string> empName_;
    std::shared_ptr<::trantor::Date> dateTime_;
    std::shared_ptr<std::string> lines_;
    std::shared_ptr<int8_t> status_;
    std::shared_ptr<std::string> comment_;
    std::shared_ptr<std::string> remark_;
    std::shared_ptr<::trantor::Date> createTime_;
    std::shared_ptr<::trantor::Date> updateTime_;
    std::shared_ptr<int32_t> version_;
    std::shared_ptr<uint8_t> isCancel_;
    std::shared_ptr<uint8_t> type_;
    std::shared_ptr<uint64_t> shopId_;
    std::shared_ptr<uint8_t> isDelete_;
    std::shared_ptr<uint64_t> adminId_;
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
    bool dirtyFlag_[18]={ false };
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
        sql += "purchase_order_id,";
        ++parametersCount;
        if(!dirtyFlag_[1])
        {
            needSelection=true;
        }
        if(dirtyFlag_[2])
        {
            sql += "purchase_order_key,";
            ++parametersCount;
        }
        sql += "supplier_id,";
        ++parametersCount;
        if(!dirtyFlag_[3])
        {
            needSelection=true;
        }
        if(dirtyFlag_[4])
        {
            sql += "emp_name,";
            ++parametersCount;
        }
        sql += "date_time,";
        ++parametersCount;
        if(!dirtyFlag_[5])
        {
            needSelection=true;
        }
        if(dirtyFlag_[6])
        {
            sql += "lines,";
            ++parametersCount;
        }
        sql += "status,";
        ++parametersCount;
        if(!dirtyFlag_[7])
        {
            needSelection=true;
        }
        if(dirtyFlag_[8])
        {
            sql += "comment,";
            ++parametersCount;
        }
        if(dirtyFlag_[9])
        {
            sql += "remark,";
            ++parametersCount;
        }
        sql += "create_time,";
        ++parametersCount;
        if(!dirtyFlag_[10])
        {
            needSelection=true;
        }
        sql += "update_time,";
        ++parametersCount;
        if(!dirtyFlag_[11])
        {
            needSelection=true;
        }
        sql += "version,";
        ++parametersCount;
        if(!dirtyFlag_[12])
        {
            needSelection=true;
        }
        sql += "is_cancel,";
        ++parametersCount;
        if(!dirtyFlag_[13])
        {
            needSelection=true;
        }
        sql += "type,";
        ++parametersCount;
        if(!dirtyFlag_[14])
        {
            needSelection=true;
        }
        sql += "shop_id,";
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
        sql += "admin_id,";
        ++parametersCount;
        if(!dirtyFlag_[17])
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

/**
 *
 *  ContractRecords.h
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

class ContractRecords
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _create_time;
        static const std::string _update_time;
        static const std::string _remark;
        static const std::string _is_delete;
        static const std::string _content;
        static const std::string _data;
        static const std::string _order_key;
        static const std::string _is_show;
        static const std::string _contract_type;
        static const std::string _approval_status;
        static const std::string _admin_id;
        static const std::string _supply_contract_pic;
        static const std::string _buyer_contract_pic;
        static const std::string _is_finish;
        static const std::string _shop_id;
        static const std::string _template_id;
        static const std::string _auditing_remark;
        static const std::string _contract_key;
        static const std::string _is_point_price;
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
    explicit ContractRecords(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit ContractRecords(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    ContractRecords(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    ContractRecords() = default;
    
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


    /**  For column remark  */
    ///Get the value of the column remark, returns the default value if the column is null
    const std::string &getValueOfRemark() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getRemark() const noexcept;

    ///Set the value of the column remark
    void setRemark(const std::string &pRemark) noexcept;
    void setRemark(std::string &&pRemark) noexcept;
    void setRemarkToNull() noexcept;


    /**  For column is_delete  */
    ///Get the value of the column is_delete, returns the default value if the column is null
    const int8_t &getValueOfIsDelete() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int8_t> &getIsDelete() const noexcept;

    ///Set the value of the column is_delete
    void setIsDelete(const int8_t &pIsDelete) noexcept;


    /**  For column content  */
    ///Get the value of the column content, returns the default value if the column is null
    const std::string &getValueOfContent() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getContent() const noexcept;

    ///Set the value of the column content
    void setContent(const std::string &pContent) noexcept;
    void setContent(std::string &&pContent) noexcept;
    void setContentToNull() noexcept;


    /**  For column data  */
    ///Get the value of the column data, returns the default value if the column is null
    const std::string &getValueOfData() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getData() const noexcept;

    ///Set the value of the column data
    void setData(const std::string &pData) noexcept;
    void setData(std::string &&pData) noexcept;


    /**  For column order_key  */
    ///Get the value of the column order_key, returns the default value if the column is null
    const std::string &getValueOfOrderKey() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getOrderKey() const noexcept;

    ///Set the value of the column order_key
    void setOrderKey(const std::string &pOrderKey) noexcept;
    void setOrderKey(std::string &&pOrderKey) noexcept;


    /**  For column is_show  */
    ///Get the value of the column is_show, returns the default value if the column is null
    const uint8_t &getValueOfIsShow() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsShow() const noexcept;

    ///Set the value of the column is_show
    void setIsShow(const uint8_t &pIsShow) noexcept;


    /**  For column contract_type  */
    ///Get the value of the column contract_type, returns the default value if the column is null
    const uint8_t &getValueOfContractType() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getContractType() const noexcept;

    ///Set the value of the column contract_type
    void setContractType(const uint8_t &pContractType) noexcept;


    /**  For column approval_status  */
    ///Get the value of the column approval_status, returns the default value if the column is null
    const uint8_t &getValueOfApprovalStatus() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getApprovalStatus() const noexcept;

    ///Set the value of the column approval_status
    void setApprovalStatus(const uint8_t &pApprovalStatus) noexcept;


    /**  For column admin_id  */
    ///Get the value of the column admin_id, returns the default value if the column is null
    const uint64_t &getValueOfAdminId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getAdminId() const noexcept;

    ///Set the value of the column admin_id
    void setAdminId(const uint64_t &pAdminId) noexcept;


    /**  For column supply_contract_pic  */
    ///Get the value of the column supply_contract_pic, returns the default value if the column is null
    const std::string &getValueOfSupplyContractPic() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getSupplyContractPic() const noexcept;

    ///Set the value of the column supply_contract_pic
    void setSupplyContractPic(const std::string &pSupplyContractPic) noexcept;
    void setSupplyContractPic(std::string &&pSupplyContractPic) noexcept;


    /**  For column buyer_contract_pic  */
    ///Get the value of the column buyer_contract_pic, returns the default value if the column is null
    const std::string &getValueOfBuyerContractPic() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getBuyerContractPic() const noexcept;

    ///Set the value of the column buyer_contract_pic
    void setBuyerContractPic(const std::string &pBuyerContractPic) noexcept;
    void setBuyerContractPic(std::string &&pBuyerContractPic) noexcept;


    /**  For column is_finish  */
    ///Get the value of the column is_finish, returns the default value if the column is null
    const uint8_t &getValueOfIsFinish() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsFinish() const noexcept;

    ///Set the value of the column is_finish
    void setIsFinish(const uint8_t &pIsFinish) noexcept;


    /**  For column shop_id  */
    ///Get the value of the column shop_id, returns the default value if the column is null
    const int64_t &getValueOfShopId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getShopId() const noexcept;

    ///Set the value of the column shop_id
    void setShopId(const int64_t &pShopId) noexcept;


    /**  For column template_id  */
    ///Get the value of the column template_id, returns the default value if the column is null
    const int64_t &getValueOfTemplateId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getTemplateId() const noexcept;

    ///Set the value of the column template_id
    void setTemplateId(const int64_t &pTemplateId) noexcept;


    /**  For column auditing_remark  */
    ///Get the value of the column auditing_remark, returns the default value if the column is null
    const std::string &getValueOfAuditingRemark() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAuditingRemark() const noexcept;

    ///Set the value of the column auditing_remark
    void setAuditingRemark(const std::string &pAuditingRemark) noexcept;
    void setAuditingRemark(std::string &&pAuditingRemark) noexcept;
    void setAuditingRemarkToNull() noexcept;


    /**  For column contract_key  */
    ///Get the value of the column contract_key, returns the default value if the column is null
    const std::string &getValueOfContractKey() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getContractKey() const noexcept;

    ///Set the value of the column contract_key
    void setContractKey(const std::string &pContractKey) noexcept;
    void setContractKey(std::string &&pContractKey) noexcept;
    void setContractKeyToNull() noexcept;


    /**  For column is_point_price  */
    ///Get the value of the column is_point_price, returns the default value if the column is null
    const uint8_t &getValueOfIsPointPrice() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsPointPrice() const noexcept;

    ///Set the value of the column is_point_price
    void setIsPointPrice(const uint8_t &pIsPointPrice) noexcept;



    static size_t getColumnNumber() noexcept {  return 20;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<ContractRecords>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<uint64_t> id_;
    std::shared_ptr<::trantor::Date> createTime_;
    std::shared_ptr<::trantor::Date> updateTime_;
    std::shared_ptr<std::string> remark_;
    std::shared_ptr<int8_t> isDelete_;
    std::shared_ptr<std::string> content_;
    std::shared_ptr<std::string> data_;
    std::shared_ptr<std::string> orderKey_;
    std::shared_ptr<uint8_t> isShow_;
    std::shared_ptr<uint8_t> contractType_;
    std::shared_ptr<uint8_t> approvalStatus_;
    std::shared_ptr<uint64_t> adminId_;
    std::shared_ptr<std::string> supplyContractPic_;
    std::shared_ptr<std::string> buyerContractPic_;
    std::shared_ptr<uint8_t> isFinish_;
    std::shared_ptr<int64_t> shopId_;
    std::shared_ptr<int64_t> templateId_;
    std::shared_ptr<std::string> auditingRemark_;
    std::shared_ptr<std::string> contractKey_;
    std::shared_ptr<uint8_t> isPointPrice_;
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
    bool dirtyFlag_[20]={ false };
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
        sql += "create_time,";
        ++parametersCount;
        if(!dirtyFlag_[1])
        {
            needSelection=true;
        }
        sql += "update_time,";
        ++parametersCount;
        if(!dirtyFlag_[2])
        {
            needSelection=true;
        }
        if(dirtyFlag_[3])
        {
            sql += "remark,";
            ++parametersCount;
        }
        sql += "is_delete,";
        ++parametersCount;
        if(!dirtyFlag_[4])
        {
            needSelection=true;
        }
        if(dirtyFlag_[5])
        {
            sql += "content,";
            ++parametersCount;
        }
        if(dirtyFlag_[6])
        {
            sql += "data,";
            ++parametersCount;
        }
        if(dirtyFlag_[7])
        {
            sql += "order_key,";
            ++parametersCount;
        }
        sql += "is_show,";
        ++parametersCount;
        if(!dirtyFlag_[8])
        {
            needSelection=true;
        }
        sql += "contract_type,";
        ++parametersCount;
        if(!dirtyFlag_[9])
        {
            needSelection=true;
        }
        sql += "approval_status,";
        ++parametersCount;
        if(!dirtyFlag_[10])
        {
            needSelection=true;
        }
        sql += "admin_id,";
        ++parametersCount;
        if(!dirtyFlag_[11])
        {
            needSelection=true;
        }
        if(dirtyFlag_[12])
        {
            sql += "supply_contract_pic,";
            ++parametersCount;
        }
        if(dirtyFlag_[13])
        {
            sql += "buyer_contract_pic,";
            ++parametersCount;
        }
        sql += "is_finish,";
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
        sql += "template_id,";
        ++parametersCount;
        if(!dirtyFlag_[16])
        {
            needSelection=true;
        }
        if(dirtyFlag_[17])
        {
            sql += "auditing_remark,";
            ++parametersCount;
        }
        if(dirtyFlag_[18])
        {
            sql += "contract_key,";
            ++parametersCount;
        }
        sql += "is_point_price,";
        ++parametersCount;
        if(!dirtyFlag_[19])
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

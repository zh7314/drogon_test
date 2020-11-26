/**
 *
 *  Admin.h
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

class Admin
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _create_time;
        static const std::string _update_time;
        static const std::string _remark;
        static const std::string _is_delete;
        static const std::string _shop_id;
        static const std::string _admin_login_name;
        static const std::string _admin_password;
        static const std::string _admin_phone;
        static const std::string _admin_email;
        static const std::string _real_name;
        static const std::string _admin_avatar;
        static const std::string _admin_qq;
        static const std::string _admin_id;
        static const std::string _manage_product;
        static const std::string _admin_status;
        static const std::string _session_id;
        static const std::string _admin_group_ids;
        static const std::string _is_admin;
        static const std::string _is_shop_admin;
        static const std::string _token;
        static const std::string _token_time;
        static const std::string _status;
        static const std::string _weixin_token;
        static const std::string _weixin_token_time;
        static const std::string _weixin_id;
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
    explicit Admin(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit Admin(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    Admin(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    Admin() = default;
    
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
    void setCreateTimeToNull() noexcept;


    /**  For column update_time  */
    ///Get the value of the column update_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfUpdateTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getUpdateTime() const noexcept;

    ///Set the value of the column update_time
    void setUpdateTime(const ::trantor::Date &pUpdateTime) noexcept;
    void setUpdateTimeToNull() noexcept;


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


    /**  For column shop_id  */
    ///Get the value of the column shop_id, returns the default value if the column is null
    const int64_t &getValueOfShopId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getShopId() const noexcept;

    ///Set the value of the column shop_id
    void setShopId(const int64_t &pShopId) noexcept;


    /**  For column admin_login_name  */
    ///Get the value of the column admin_login_name, returns the default value if the column is null
    const std::string &getValueOfAdminLoginName() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAdminLoginName() const noexcept;

    ///Set the value of the column admin_login_name
    void setAdminLoginName(const std::string &pAdminLoginName) noexcept;
    void setAdminLoginName(std::string &&pAdminLoginName) noexcept;


    /**  For column admin_password  */
    ///Get the value of the column admin_password, returns the default value if the column is null
    const std::string &getValueOfAdminPassword() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAdminPassword() const noexcept;

    ///Set the value of the column admin_password
    void setAdminPassword(const std::string &pAdminPassword) noexcept;
    void setAdminPassword(std::string &&pAdminPassword) noexcept;
    void setAdminPasswordToNull() noexcept;


    /**  For column admin_phone  */
    ///Get the value of the column admin_phone, returns the default value if the column is null
    const std::string &getValueOfAdminPhone() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAdminPhone() const noexcept;

    ///Set the value of the column admin_phone
    void setAdminPhone(const std::string &pAdminPhone) noexcept;
    void setAdminPhone(std::string &&pAdminPhone) noexcept;
    void setAdminPhoneToNull() noexcept;


    /**  For column admin_email  */
    ///Get the value of the column admin_email, returns the default value if the column is null
    const std::string &getValueOfAdminEmail() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAdminEmail() const noexcept;

    ///Set the value of the column admin_email
    void setAdminEmail(const std::string &pAdminEmail) noexcept;
    void setAdminEmail(std::string &&pAdminEmail) noexcept;
    void setAdminEmailToNull() noexcept;


    /**  For column real_name  */
    ///Get the value of the column real_name, returns the default value if the column is null
    const std::string &getValueOfRealName() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getRealName() const noexcept;

    ///Set the value of the column real_name
    void setRealName(const std::string &pRealName) noexcept;
    void setRealName(std::string &&pRealName) noexcept;
    void setRealNameToNull() noexcept;


    /**  For column admin_avatar  */
    ///Get the value of the column admin_avatar, returns the default value if the column is null
    const std::string &getValueOfAdminAvatar() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAdminAvatar() const noexcept;

    ///Set the value of the column admin_avatar
    void setAdminAvatar(const std::string &pAdminAvatar) noexcept;
    void setAdminAvatar(std::string &&pAdminAvatar) noexcept;
    void setAdminAvatarToNull() noexcept;


    /**  For column admin_qq  */
    ///Get the value of the column admin_qq, returns the default value if the column is null
    const std::string &getValueOfAdminQq() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAdminQq() const noexcept;

    ///Set the value of the column admin_qq
    void setAdminQq(const std::string &pAdminQq) noexcept;
    void setAdminQq(std::string &&pAdminQq) noexcept;
    void setAdminQqToNull() noexcept;


    /**  For column admin_id  */
    ///Get the value of the column admin_id, returns the default value if the column is null
    const int64_t &getValueOfAdminId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int64_t> &getAdminId() const noexcept;

    ///Set the value of the column admin_id
    void setAdminId(const int64_t &pAdminId) noexcept;


    /**  For column manage_product  */
    ///Get the value of the column manage_product, returns the default value if the column is null
    const std::string &getValueOfManageProduct() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getManageProduct() const noexcept;

    ///Set the value of the column manage_product
    void setManageProduct(const std::string &pManageProduct) noexcept;
    void setManageProduct(std::string &&pManageProduct) noexcept;
    void setManageProductToNull() noexcept;


    /**  For column admin_status  */
    ///Get the value of the column admin_status, returns the default value if the column is null
    const uint8_t &getValueOfAdminStatus() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getAdminStatus() const noexcept;

    ///Set the value of the column admin_status
    void setAdminStatus(const uint8_t &pAdminStatus) noexcept;


    /**  For column session_id  */
    ///Get the value of the column session_id, returns the default value if the column is null
    const std::string &getValueOfSessionId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getSessionId() const noexcept;

    ///Set the value of the column session_id
    void setSessionId(const std::string &pSessionId) noexcept;
    void setSessionId(std::string &&pSessionId) noexcept;
    void setSessionIdToNull() noexcept;


    /**  For column admin_group_ids  */
    ///Get the value of the column admin_group_ids, returns the default value if the column is null
    const std::string &getValueOfAdminGroupIds() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAdminGroupIds() const noexcept;

    ///Set the value of the column admin_group_ids
    void setAdminGroupIds(const std::string &pAdminGroupIds) noexcept;
    void setAdminGroupIds(std::string &&pAdminGroupIds) noexcept;
    void setAdminGroupIdsToNull() noexcept;


    /**  For column is_admin  */
    ///Get the value of the column is_admin, returns the default value if the column is null
    const uint8_t &getValueOfIsAdmin() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsAdmin() const noexcept;

    ///Set the value of the column is_admin
    void setIsAdmin(const uint8_t &pIsAdmin) noexcept;


    /**  For column is_shop_admin  */
    ///Get the value of the column is_shop_admin, returns the default value if the column is null
    const uint8_t &getValueOfIsShopAdmin() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsShopAdmin() const noexcept;

    ///Set the value of the column is_shop_admin
    void setIsShopAdmin(const uint8_t &pIsShopAdmin) noexcept;


    /**  For column token  */
    ///Get the value of the column token, returns the default value if the column is null
    const std::string &getValueOfToken() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getToken() const noexcept;

    ///Set the value of the column token
    void setToken(const std::string &pToken) noexcept;
    void setToken(std::string &&pToken) noexcept;
    void setTokenToNull() noexcept;


    /**  For column token_time  */
    ///Get the value of the column token_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfTokenTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getTokenTime() const noexcept;

    ///Set the value of the column token_time
    void setTokenTime(const ::trantor::Date &pTokenTime) noexcept;
    void setTokenTimeToNull() noexcept;


    /**  For column status  */
    ///Get the value of the column status, returns the default value if the column is null
    const int8_t &getValueOfStatus() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int8_t> &getStatus() const noexcept;

    ///Set the value of the column status
    void setStatus(const int8_t &pStatus) noexcept;


    /**  For column weixin_token  */
    ///Get the value of the column weixin_token, returns the default value if the column is null
    const std::string &getValueOfWeixinToken() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getWeixinToken() const noexcept;

    ///Set the value of the column weixin_token
    void setWeixinToken(const std::string &pWeixinToken) noexcept;
    void setWeixinToken(std::string &&pWeixinToken) noexcept;
    void setWeixinTokenToNull() noexcept;


    /**  For column weixin_token_time  */
    ///Get the value of the column weixin_token_time, returns the default value if the column is null
    const ::trantor::Date &getValueOfWeixinTokenTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getWeixinTokenTime() const noexcept;

    ///Set the value of the column weixin_token_time
    void setWeixinTokenTime(const ::trantor::Date &pWeixinTokenTime) noexcept;
    void setWeixinTokenTimeToNull() noexcept;


    /**  For column weixin_id  */
    ///Get the value of the column weixin_id, returns the default value if the column is null
    const int32_t &getValueOfWeixinId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getWeixinId() const noexcept;

    ///Set the value of the column weixin_id
    void setWeixinId(const int32_t &pWeixinId) noexcept;
    void setWeixinIdToNull() noexcept;



    static size_t getColumnNumber() noexcept {  return 26;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<Admin>;
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
    std::shared_ptr<int64_t> shopId_;
    std::shared_ptr<std::string> adminLoginName_;
    std::shared_ptr<std::string> adminPassword_;
    std::shared_ptr<std::string> adminPhone_;
    std::shared_ptr<std::string> adminEmail_;
    std::shared_ptr<std::string> realName_;
    std::shared_ptr<std::string> adminAvatar_;
    std::shared_ptr<std::string> adminQq_;
    std::shared_ptr<int64_t> adminId_;
    std::shared_ptr<std::string> manageProduct_;
    std::shared_ptr<uint8_t> adminStatus_;
    std::shared_ptr<std::string> sessionId_;
    std::shared_ptr<std::string> adminGroupIds_;
    std::shared_ptr<uint8_t> isAdmin_;
    std::shared_ptr<uint8_t> isShopAdmin_;
    std::shared_ptr<std::string> token_;
    std::shared_ptr<::trantor::Date> tokenTime_;
    std::shared_ptr<int8_t> status_;
    std::shared_ptr<std::string> weixinToken_;
    std::shared_ptr<::trantor::Date> weixinTokenTime_;
    std::shared_ptr<int32_t> weixinId_;
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
    bool dirtyFlag_[26]={ false };
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
        if(dirtyFlag_[1])
        {
            sql += "create_time,";
            ++parametersCount;
        }
        if(dirtyFlag_[2])
        {
            sql += "update_time,";
            ++parametersCount;
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
        sql += "shop_id,";
        ++parametersCount;
        if(!dirtyFlag_[5])
        {
            needSelection=true;
        }
        if(dirtyFlag_[6])
        {
            sql += "admin_login_name,";
            ++parametersCount;
        }
        if(dirtyFlag_[7])
        {
            sql += "admin_password,";
            ++parametersCount;
        }
        if(dirtyFlag_[8])
        {
            sql += "admin_phone,";
            ++parametersCount;
        }
        if(dirtyFlag_[9])
        {
            sql += "admin_email,";
            ++parametersCount;
        }
        if(dirtyFlag_[10])
        {
            sql += "real_name,";
            ++parametersCount;
        }
        if(dirtyFlag_[11])
        {
            sql += "admin_avatar,";
            ++parametersCount;
        }
        if(dirtyFlag_[12])
        {
            sql += "admin_qq,";
            ++parametersCount;
        }
        sql += "admin_id,";
        ++parametersCount;
        if(!dirtyFlag_[13])
        {
            needSelection=true;
        }
        if(dirtyFlag_[14])
        {
            sql += "manage_product,";
            ++parametersCount;
        }
        sql += "admin_status,";
        ++parametersCount;
        if(!dirtyFlag_[15])
        {
            needSelection=true;
        }
        if(dirtyFlag_[16])
        {
            sql += "session_id,";
            ++parametersCount;
        }
        if(dirtyFlag_[17])
        {
            sql += "admin_group_ids,";
            ++parametersCount;
        }
        sql += "is_admin,";
        ++parametersCount;
        if(!dirtyFlag_[18])
        {
            needSelection=true;
        }
        sql += "is_shop_admin,";
        ++parametersCount;
        if(!dirtyFlag_[19])
        {
            needSelection=true;
        }
        if(dirtyFlag_[20])
        {
            sql += "token,";
            ++parametersCount;
        }
        if(dirtyFlag_[21])
        {
            sql += "token_time,";
            ++parametersCount;
        }
        sql += "status,";
        ++parametersCount;
        if(!dirtyFlag_[22])
        {
            needSelection=true;
        }
        if(dirtyFlag_[23])
        {
            sql += "weixin_token,";
            ++parametersCount;
        }
        if(dirtyFlag_[24])
        {
            sql += "weixin_token_time,";
            ++parametersCount;
        }
        if(dirtyFlag_[25])
        {
            sql += "weixin_id,";
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
        if(dirtyFlag_[7])
        {
            sql.append("?,");

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
        if(dirtyFlag_[17])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[18])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
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
        if(dirtyFlag_[21])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[22])
        {
            sql.append("?,");

        } 
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[23])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[24])
        {
            sql.append("?,");

        } 
        if(dirtyFlag_[25])
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

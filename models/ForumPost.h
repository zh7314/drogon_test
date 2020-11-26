/**
 *
 *  ForumPost.h
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

class ForumPost
{
  public:
    struct Cols
    {
        static const std::string _id;
        static const std::string _user_id;
        static const std::string _content;
        static const std::string _picture_urls;
        static const std::string _type;
        static const std::string _status;
        static const std::string _favour_num;
        static const std::string _click_num;
        static const std::string _is_delete;
        static const std::string _is_show;
        static const std::string _sort;
        static const std::string _create_time;
        static const std::string _update_time;
        static const std::string _cate_id;
        static const std::string _title;
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
    explicit ForumPost(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit ForumPost(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    ForumPost(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    ForumPost() = default;
    
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


    /**  For column user_id  */
    ///Get the value of the column user_id, returns the default value if the column is null
    const uint64_t &getValueOfUserId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getUserId() const noexcept;

    ///Set the value of the column user_id
    void setUserId(const uint64_t &pUserId) noexcept;


    /**  For column content  */
    ///Get the value of the column content, returns the default value if the column is null
    const std::string &getValueOfContent() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getContent() const noexcept;

    ///Set the value of the column content
    void setContent(const std::string &pContent) noexcept;
    void setContent(std::string &&pContent) noexcept;
    void setContentToNull() noexcept;


    /**  For column picture_urls  */
    ///Get the value of the column picture_urls, returns the default value if the column is null
    const std::string &getValueOfPictureUrls() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPictureUrls() const noexcept;

    ///Set the value of the column picture_urls
    void setPictureUrls(const std::string &pPictureUrls) noexcept;
    void setPictureUrls(std::string &&pPictureUrls) noexcept;
    void setPictureUrlsToNull() noexcept;


    /**  For column type  */
    ///Get the value of the column type, returns the default value if the column is null
    const uint8_t &getValueOfType() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getType() const noexcept;

    ///Set the value of the column type
    void setType(const uint8_t &pType) noexcept;


    /**  For column status  */
    ///Get the value of the column status, returns the default value if the column is null
    const uint8_t &getValueOfStatus() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getStatus() const noexcept;

    ///Set the value of the column status
    void setStatus(const uint8_t &pStatus) noexcept;


    /**  For column favour_num  */
    ///Get the value of the column favour_num, returns the default value if the column is null
    const uint32_t &getValueOfFavourNum() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint32_t> &getFavourNum() const noexcept;

    ///Set the value of the column favour_num
    void setFavourNum(const uint32_t &pFavourNum) noexcept;
    void setFavourNumToNull() noexcept;


    /**  For column click_num  */
    ///Get the value of the column click_num, returns the default value if the column is null
    const uint32_t &getValueOfClickNum() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint32_t> &getClickNum() const noexcept;

    ///Set the value of the column click_num
    void setClickNum(const uint32_t &pClickNum) noexcept;
    void setClickNumToNull() noexcept;


    /**  For column is_delete  */
    ///Get the value of the column is_delete, returns the default value if the column is null
    const uint8_t &getValueOfIsDelete() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsDelete() const noexcept;

    ///Set the value of the column is_delete
    void setIsDelete(const uint8_t &pIsDelete) noexcept;


    /**  For column is_show  */
    ///Get the value of the column is_show, returns the default value if the column is null
    const uint8_t &getValueOfIsShow() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint8_t> &getIsShow() const noexcept;

    ///Set the value of the column is_show
    void setIsShow(const uint8_t &pIsShow) noexcept;
    void setIsShowToNull() noexcept;


    /**  For column sort  */
    ///Get the value of the column sort, returns the default value if the column is null
    const uint32_t &getValueOfSort() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint32_t> &getSort() const noexcept;

    ///Set the value of the column sort
    void setSort(const uint32_t &pSort) noexcept;


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


    /**  For column cate_id  */
    ///Get the value of the column cate_id, returns the default value if the column is null
    const uint32_t &getValueOfCateId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint32_t> &getCateId() const noexcept;

    ///Set the value of the column cate_id
    void setCateId(const uint32_t &pCateId) noexcept;


    /**  For column title  */
    ///Get the value of the column title, returns the default value if the column is null
    const std::string &getValueOfTitle() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getTitle() const noexcept;

    ///Set the value of the column title
    void setTitle(const std::string &pTitle) noexcept;
    void setTitle(std::string &&pTitle) noexcept;


    /**  For column admin_id  */
    ///Get the value of the column admin_id, returns the default value if the column is null
    const uint64_t &getValueOfAdminId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getAdminId() const noexcept;

    ///Set the value of the column admin_id
    void setAdminId(const uint64_t &pAdminId) noexcept;



    static size_t getColumnNumber() noexcept {  return 16;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<ForumPost>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<uint64_t> id_;
    std::shared_ptr<uint64_t> userId_;
    std::shared_ptr<std::string> content_;
    std::shared_ptr<std::string> pictureUrls_;
    std::shared_ptr<uint8_t> type_;
    std::shared_ptr<uint8_t> status_;
    std::shared_ptr<uint32_t> favourNum_;
    std::shared_ptr<uint32_t> clickNum_;
    std::shared_ptr<uint8_t> isDelete_;
    std::shared_ptr<uint8_t> isShow_;
    std::shared_ptr<uint32_t> sort_;
    std::shared_ptr<::trantor::Date> createTime_;
    std::shared_ptr<::trantor::Date> updateTime_;
    std::shared_ptr<uint32_t> cateId_;
    std::shared_ptr<std::string> title_;
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
    bool dirtyFlag_[16]={ false };
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
        sql += "user_id,";
        ++parametersCount;
        if(!dirtyFlag_[1])
        {
            needSelection=true;
        }
        if(dirtyFlag_[2])
        {
            sql += "content,";
            ++parametersCount;
        }
        if(dirtyFlag_[3])
        {
            sql += "picture_urls,";
            ++parametersCount;
        }
        sql += "type,";
        ++parametersCount;
        if(!dirtyFlag_[4])
        {
            needSelection=true;
        }
        sql += "status,";
        ++parametersCount;
        if(!dirtyFlag_[5])
        {
            needSelection=true;
        }
        sql += "favour_num,";
        ++parametersCount;
        if(!dirtyFlag_[6])
        {
            needSelection=true;
        }
        sql += "click_num,";
        ++parametersCount;
        if(!dirtyFlag_[7])
        {
            needSelection=true;
        }
        sql += "is_delete,";
        ++parametersCount;
        if(!dirtyFlag_[8])
        {
            needSelection=true;
        }
        sql += "is_show,";
        ++parametersCount;
        if(!dirtyFlag_[9])
        {
            needSelection=true;
        }
        sql += "sort,";
        ++parametersCount;
        if(!dirtyFlag_[10])
        {
            needSelection=true;
        }
        if(dirtyFlag_[11])
        {
            sql += "create_time,";
            ++parametersCount;
        }
        if(dirtyFlag_[12])
        {
            sql += "update_time,";
            ++parametersCount;
        }
        sql += "cate_id,";
        ++parametersCount;
        if(!dirtyFlag_[13])
        {
            needSelection=true;
        }
        if(dirtyFlag_[14])
        {
            sql += "title,";
            ++parametersCount;
        }
        sql += "admin_id,";
        ++parametersCount;
        if(!dirtyFlag_[15])
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
        if(dirtyFlag_[15])
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

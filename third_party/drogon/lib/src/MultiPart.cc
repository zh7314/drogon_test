/**
 *
 *  MultiPart.cc
 *  An Tao
 *
 *  Copyright 2018, An Tao.  All rights reserved.
 *  https://github.com/an-tao/drogon
 *  Use of this source code is governed by a MIT license
 *  that can be found in the License file.
 *
 *  Drogon
 *
 */

#include "HttpRequestImpl.h"
#include "HttpUtils.h"
#include "HttpAppFrameworkImpl.h"
#include "HttpFileImpl.h"
#include <drogon/MultiPart.h>
#include <drogon/utils/Utilities.h>
#include <drogon/config.h>
#include <algorithm>
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#ifndef _WIN32
#include <unistd.h>
#endif

using namespace drogon;

const std::vector<HttpFile> &MultiPartParser::getFiles() const
{
    return files_;
}

const std::map<std::string, std::string> &MultiPartParser::getParameters() const
{
    return parameters_;
}

int MultiPartParser::parse(const HttpRequestPtr &req)
{
    if (req->method() != Post)
        return -1;
    const std::string &contentType =
        static_cast<HttpRequestImpl *>(req.get())->getHeaderBy("content-type");
    if (contentType.empty())
    {
        return -1;
    }
    std::string::size_type pos = contentType.find(';');
    if (pos == std::string::npos)
        return -1;

    std::string type = contentType.substr(0, pos);
    std::transform(type.begin(), type.end(), type.begin(), tolower);
    if (type != "multipart/form-data")
        return -1;
    pos = contentType.find("boundary=");
    if (pos == std::string::npos)
        return -1;
    return parse(req,
                 contentType.data() + (pos + 9),
                 contentType.size() - (pos + 9));
}

int MultiPartParser::parseEntity(const char *begin, const char *end)
{
    static const char entityName[] = "name=\"";
    static const char quotationMark[] = "\"";
    static const char fileName[] = "filename=\"";
    static const char CRLF[] = "\r\n\r\n";

    auto pos = std::search(begin, end, entityName, entityName + 6);
    if (pos == end)
        return -1;
    pos += 6;
    auto pos1 = std::search(pos, end, quotationMark, quotationMark + 1);
    if (pos1 == end)
        return -1;
    std::string name(pos, pos1);
    pos = std::search(pos1, end, fileName, fileName + 10);
    if (pos == end)
    {
        pos1 = std::search(pos1, end, CRLF, CRLF + 4);
        if (pos1 == end)
            return -1;
        parameters_[name] = std::string(pos1 + 4, end);
        return 0;
    }
    else
    {
        pos += 10;
        auto pos1 = std::search(pos, end, quotationMark, quotationMark + 1);
        if (pos1 == end)
            return -1;
        auto filePtr = std::make_shared<HttpFileImpl>();
        filePtr->setRequest(requestPtr_);
        filePtr->setFileName(std::string(pos, pos1));
        pos1 = std::search(pos1, end, CRLF, CRLF + 4);
        if (pos1 == end)
            return -1;
        filePtr->setFile(pos1 + 4, static_cast<size_t>(end - pos1 - 4));
        files_.push_back(std::move(HttpFile(std::move(filePtr))));
        return 0;
    }
}

int MultiPartParser::parse(const HttpRequestPtr &req,
                           const char *boundaryData,
                           size_t boundaryLen)
{
    string_view boundary{boundaryData, boundaryLen};
    if (boundary.size() > 2 && boundary[0] == '\"')
        boundary = boundary.substr(1, boundary.size() - 2);
    requestPtr_ = req;
    string_view::size_type pos1, pos2;
    pos1 = 0;
    auto content = static_cast<HttpRequestImpl *>(req.get())->bodyView();
    pos2 = content.find(boundary);
    while (1)
    {
        pos1 = pos2;
        if (pos1 == string_view::npos)
            break;
        pos1 += boundary.length();
        if (content[pos1] == '\r' && content[pos1 + 1] == '\n')
            pos1 += 2;
        pos2 = content.find(boundary, pos1);
        if (pos2 == string_view::npos)
            break;
        //    std::cout<<"pos1="<<pos1<<" pos2="<<pos2<<std::endl;
        if (content[pos2 - 4] == '\r' && content[pos2 - 3] == '\n' &&
            content[pos2 - 2] == '-' && content[pos2 - 1] == '-')
            pos2 -= 4;
        if (parseEntity(content.data() + pos1, content.data() + pos2) != 0)
            return -1;
        // pos2+=boundary.length();
    }
    return 0;
}

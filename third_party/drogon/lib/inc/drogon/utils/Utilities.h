/**
 *
 *  Utilities.h
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

#pragma once

#include <trantor/utils/Date.h>
#include <trantor/utils/Funcs.h>
#include <drogon/utils/string_view.h>
#include <memory>
#include <string>
#include <vector>
#include <set>
#include <limits>
#ifdef _WIN32
#include <time.h>
char *strptime(const char *s, const char *f, struct tm *tm);
time_t timegm(struct tm *tm);
#endif
namespace drogon
{
namespace utils
{
/// Determine if the string is an integer
bool isInteger(const std::string &str);

/// Generate random a string
/**
 * @param length The string length
 * The returned string consists of uppercase and lowercase letters and numbers
 */
std::string genRandomString(int length);

/// Convert a binary string to hex format
std::string binaryStringToHex(const unsigned char *ptr, size_t length);

/// Get a binary string from hexadecimal format
std::string hexToBinaryString(const char *ptr, size_t length);

/// Get a binary vector from hexadecimal format
std::vector<char> hexToBinaryVector(const char *ptr, size_t length);

/// Split the string into multiple separated strings.
/**
 * @param acceptEmptyString if true, empty strings are accepted in the
 * result, for example, splitting the ",1,2,,3," by "," produces
 * ["","1","2","","3",""]
 */
inline std::vector<std::string> splitString(const std::string &str,
                                            const std::string &separator,
                                            bool acceptEmptyString = false)
{
    return trantor::splitString(str, separator, acceptEmptyString);
}

std::set<std::string> splitStringToSet(const std::string &str,
                                       const std::string &separator);

/// Get UUID string.
std::string getUuid();

/// Encode the string to base64 format.
std::string base64Encode(const unsigned char *bytes_to_encode,
                         unsigned int in_len,
                         bool url_safe = false);

/// Decode the base64 format string.
std::string base64Decode(const std::string &encoded_string);
std::vector<char> base64DecodeToVector(const std::string &encoded_string);

/// Check if the string need decoding
bool needUrlDecoding(const char *begin, const char *end);

/// Decode from or encode to the URL format string
std::string urlDecode(const char *begin, const char *end);
inline std::string urlDecode(const std::string &szToDecode)
{
    auto begin = szToDecode.data();
    return urlDecode(begin, begin + szToDecode.length());
}
inline std::string urlDecode(const string_view &szToDecode)
{
    auto begin = szToDecode.data();
    return urlDecode(begin, begin + szToDecode.length());
}

std::string urlEncode(const std::string &);
std::string urlEncodeComponent(const std::string &);

/// Get the MD5 digest of a string.
std::string getMd5(const char *data, const size_t dataLen);
inline std::string getMd5(const std::string &originalString)
{
    return getMd5(originalString.data(), originalString.length());
}

/// Commpress or decompress data using gzip lib.
/**
 * @param data the input data
 * @param ndata the input data length
 */
std::string gzipCompress(const char *data, const size_t ndata);
std::string gzipDecompress(const char *data, const size_t ndata);

/// Commpress or decompress data using brotli lib.
/**
 * @param data the input data
 * @param ndata the input data length
 */
std::string brotliCompress(const char *data, const size_t ndata);
std::string brotliDecompress(const char *data, const size_t ndata);

/// Get the http full date string
/**
 * rfc2616-3.3.1
 * Full Date format(RFC 822)
 * like this:
 * @code
   Sun, 06 Nov 1994 08:49:37 GMT
   Wed, 12 Sep 2018 09:22:40 GMT
   @endcode
 */
char *getHttpFullDate(const trantor::Date &date = trantor::Date::now());

/// Get the trantor::Date object according to the http full date string
/**
 * Returns trantor::Date(std::numeric_limits<int64_t>::max()) upon failure.
 */
trantor::Date getHttpDate(const std::string &httpFullDateString);

/// Get a formatted string
std::string formattedString(const char *format, ...);

/// Recursively create a file system path
/**
 * Return 0 or -1 on success or failure.
 */
int createPath(const std::string &path);

}  // namespace utils
}  // namespace drogon

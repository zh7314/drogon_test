﻿//#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0);

    // 把 now 转换为字符串形式
    char* dt = ctime(&now);

    cout << "本地日期和时间：" << dt << endl;

    // 把 now 转换为 tm 结构
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间：" << dt << endl;

    system("pause");
}

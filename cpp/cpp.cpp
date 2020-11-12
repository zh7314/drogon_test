#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
//#include "head.h"
#include <ctime>
using namespace std;

struct MyStruct
{
    char name[20];
    int age;
    string bb;

};

int main()
{
    //time_t now = time(0);
    //// 把 now 转换为字符串形式
    //char* dt = ctime(&now);
    //cout << "本地日期和时间：" << dt << endl;
    //// 把 now 转换为 tm 结构
    //tm* gmtm = gmtime(&now);
    //dt = asctime(gmtm);
    //std::cout << "UTC 日期和时间：" << dt << endl;

  /*  MyStruct ss;
    ss.age = 10;
    ss.bb = "3333";
    strcpy(ss.name,"999999");*/
    
   /* string rr = "22222";

    std::cout << "2222"<< typeid(rr).name() << endl;*/

    int i = 99;
    int* p;
    p = &i;
    cout << p << endl;
    cout << *p << endl;






    system("pause");
}

// HttpUtils.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "HttpUtils.h"
#include"httplib.h"
#include <iostream>
#include <string>
using namespace std;


// 这是导出变量的一个示例
HTTPUTILS_API int nHttpUtils=0;

// 这是导出函数的一个示例。
HTTPUTILS_API int fnHttpUtils(void)
{
    return 0;
}

// 这是已导出类的构造函数。
CHttpUtils::CHttpUtils()
{
    return;
}

HTTPUTILS_API void testHttp() {
    httplib::Client cli("www.baidu.com");
    auto res = cli.Post("/");

    string str;

    std::cout<< str << res->body << std::endl;


    printf("port :%s\n", str.data());
    
}

/*
 * Created by zhchuch.
 */

#ifndef CPP_PRIMER_CONST_FILE2_H
#define CPP_PRIMER_CONST_FILE2_H

#include <iostream>
using namespace std;

//const int buffer = 612;   // 错误, buffer 重定义
//extern const int bufSize; // 正确, 使用 extern 修饰之后这里就只起到 `声明变量` 的作用, 没有重定义

void const_file2()
{
    cout << "const buffer = " << buffer << endl;
    cout << "extern const bufSize = " << bufSize << endl;
}

#endif //CPP_PRIMER_CONST_FILE2_H

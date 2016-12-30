/*
 * 用来测试 const 常量的定义和使用
 *
 * Created by zhchuch.
 */

#ifndef CPP_PRIMER_CONST_FILE1_H
#define CPP_PRIMER_CONST_FILE1_H

#include <iostream>
using namespace std;

const int buffer = 512;
extern const int bufSize = 1024;
constexpr int test_const_expr = 2048;   // C++ 11 新特性, 允许定义 constexpr类型 以便编译器来验证变量是否是一个常量表达式

void const_file1()
{
    cout << "const buffer = " << buffer << endl;
    cout << "extern const bufSize = " << bufSize << endl;

    cout<< endl << "constexpr declare const-expression: " << test_const_expr << endl << endl;
}

#endif //CPP_PRIMER_CONST_FILE1_H

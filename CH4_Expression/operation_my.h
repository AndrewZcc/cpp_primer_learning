/*
 * Created by zhchuch.
 */

#ifndef CPP_PRIMER_OPERATION_MY_H
#define CPP_PRIMER_OPERATION_MY_H

#include <iostream>

using namespace std;

void my_operation()
{
    // 算术运算符
    cout << "---- Arithmetic Operator ----" << endl;
    cout << "21/6 = " << 21/6 << ", 21%6 = " << 21%6 << endl;       // 21 = 6 * (3) + (3)
    cout << "-21/6 = " << -21/6 << ", -21%6 = " << -21%6 << endl;   // -21 = 6 * (-3) + (-3)
    cout << "21/-6 = " << 21/-6 << ", 21%-6 = " << 21%-6 << endl;   // 21 = -6 * (-3) + (3)     !!
    cout << "-21/-6 = " << -21/-6 << ", -21%-6 = " << -21%-6 << endl; // -21 = -6 * (3) + (-3)  !!

    // sizeof() 运算符
    cout << endl << "---- Sizeof Operator ----" << endl;
    int x[10]; int *p = x;
    cout << "a: sizeof(x) = " << sizeof(x) << ", b: sizeof(x[0]) = " << sizeof(x[0])
         << ", a/b = " << sizeof(x)/sizeof(x[0]) << endl;   // ok
    cout << "a: sizeof(p) = " << sizeof(p) << ", b: sizeof(*p) = " << sizeof(*p)
         << ", a/b = " << sizeof(p)/sizeof(*p) << endl;     // error 注意: 这里 p 不是数组了, 而是指针 int*, 占8个字节大小
    // 这也是为什么 C++ 写函数传递数组时, 为什么同时要求传递一个数组长度(len) 的原因!
    int a = 1, b = 2;
    int res = sizeof a + b;
    cout << "sizeof a + b = " << res << endl;
    res = sizeof (a + b);
    cout << "sizeof (a + b) = " << res << endl;
}

#endif //CPP_PRIMER_OPERATION_MY_H

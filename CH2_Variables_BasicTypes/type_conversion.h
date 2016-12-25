/*
 * 2.1.2 Type Conversion [58/864]
 * Created by zhchuch.
 */

#ifndef CPP_PRIMER_TYPE_CONVERSION_H
#define CPP_PRIMER_TYPE_CONVERSION_H

#include <iostream>

using namespace std;

void type_conversion()
{
    cout << endl << "+++ 2.1.2 Type Conversion test case +++" << endl;

    bool b = 42;
    cout << "1: b = " << b << endl;

    int i = b;      // i = 1
    cout << "2: i = " << i << endl;

    i = 3.14;       // i = 3;
    cout << "3: i = " << i << endl;

    double pi = i;  // pi = 3.0;
    cout << "4: pi = " << pi << endl;

    cout << "-- unsigned int --" << endl;
    // 1111 1111 ( 直接将最高位的符号位 1 当成无符号位进行计算)
    unsigned char c = -1;   // c = 255          -1 complement: 0000 0001 -> 1111 1111 (unsigned 255)
    cout << "5-1: c(-1) = " << (int)c << endl;
    c = 0; cout << "5-2: c(0) = " << (int)c << endl;
    c = 255; cout << "5-2: c(255) = " << (int)c << endl;
    c = 256; cout << "5-2: c(256) = " << (int)c << endl;


    cout << "-- signed int --" << endl;
    // 备注: signed char = signed int 只能表示 [-128, 127]
    signed char c21 = 126;  // 0111 1110        // 符号位为 0, 正常计算
    cout << "6-1: c21(126) = " << (int)c21 << endl;
    signed char c22 = 127;  // 0111 1111        // 符号位为 0, 正常计算
    cout << "6-1: c22(127) = " << (int)c22 << endl;
    signed char c23 = 128;  // 1000 0000        (-128) 符号位为 1, 取反加一 再加负号
    cout << "6-1: c23(128) = " << (int)c23 << endl;  // (-)0111 1111+1 = (-)1000 0000 = -128
    signed char c2 = 255;       // 1111 1111    (-1) 符号位为 1, 取反加一 再加负号
    cout << "6-2: c2(255) = " << (int)c2 << endl;    // (-)0000 0000+1 = (-)0000 0001 = -1
    signed char c3 = 256;   // [1] 0000 0000    (0)
    cout << "6-2: c3(256) = " << (int)c3 << endl;
    signed char c4 = 257;   // [1] 0000 0001    (1)
    cout << "6-2: c4(257) = " << (int)c4 << endl;
}

#endif //CPP_PRIMER_TYPE_CONVERSION_H

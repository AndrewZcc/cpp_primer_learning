/*
 * 编写代码 测试 C++ 标准库中的 <string> 的使用!
 * Created by zhchuch.
 */

#ifndef CPP_PRIMER_STRING_MY_H
#define CPP_PRIMER_STRING_MY_H

#include <iostream>
#include <string>       // 位于 C++ 标准库中

using namespace std;

void my_string()
{
    // 初始化操作
    string a1;
    string a2 = "abc";
    string a3 = a2;
    string a4(a3);
    string a5(10, 'z');
    cout << "a1: " << a1 << "\na2: " << a2 << "\na3: " << a3 << "\na4: " << a4 << "\na5: " << a5 <<endl;

    cout << "----------------" << endl;

    // 关于 size() 函数 返回值 string::size_type 的注意事项
    // size() 函数的返回值是无符号类型 unsigned! 所以千万不要轻易地和 有符号类型(signed), 比如: int 混用!
    cout << "a5.size(): unsigned long " << a5.size() << endl;
    if (a5.size() < 20)
        cout << "a5.size()=10 < 20" << endl;
    if (a5.size() < 5)
        cout << "a5.size()=10 < 5" << endl;
    if (a5.size() < -1) {
        cout << "a5.size()=10 < -1 (错误的运行结果, 因为size()返回的是unsigned数,它会自动将 -1 "
                "这个有符号数先转为无符号数(特别大)再进行比较,从而产生了错误的运行结果!)" << endl;
        cout << "a5.size()=10 < -1 (错误的运行结果, 归根结底是: 切记不要将 unsigned数 与 signed数 混用!)" << endl;
    }

    cout << "----------------" << endl;

    // 字符串相加: 注意
    // 当字符串和字面值混用在一条语句中使用时, 切记必须确保每个 加法运算符(+) 的两侧的运算对象 至少有一个是 string!
    string s1 = a2 + "def";               // OK
    //string s2 = "abc" + "def";          // 错误
    string s3 = s1 + ", " + "world";      // OK
    //string s4 = "abc" + ", " + s3;      // 错误

    cout << "s1 = " + s1 << "\ns3 = " + s3 << endl;
}

#endif //CPP_PRIMER_STRING_MY_H

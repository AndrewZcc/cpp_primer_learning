/*
 * Created by zhchuch.
 */

#ifndef CPP_PRIMER_CLASS_TRY_H
#define CPP_PRIMER_CLASS_TRY_H

#include <iostream>

using namespace std;

struct ClassA {

    friend int multiply(ClassA);       // 申明 友元函数
    friend class ClassB;               // 申明 友元类

    int add(){ return a+b;}

    private:
        int a;
        int b;
        double d;
    public:
        ClassA() = default;
        ClassA(int a, int b) {this->a = a; this->b = b;}
        ClassA(int a, int c, double d) {ClassA(a, c); this->d = d;}
};      // 这里必须要以 分号 结尾

class ClassB {

    friend int multiply(ClassB);        // 申明 友元函数

    int add(){ return a+b;}

    private:
        ClassA A;
        int a;
        int b;
        double d;
    public:
        ClassB() = default;
        ClassB(int a, int b) {this->a = a; this->b = b;}
        ClassB(int a, int c, double d) {ClassA(a, c); this->d = d;}

        double multiplyA() {return A.a * A.d;}  // 通过友元类来访问 A 的私有成员

};      // 这里必须要以 分号 结尾

// 定义 友元函数: 可以直接访问 类的私有成员
int multiply(ClassA A)
{
    return A.a * A.b;
}
int multiply(ClassB B)
{
    return B.a * B.b;
}

#endif //CPP_PRIMER_CLASS_TRY_H
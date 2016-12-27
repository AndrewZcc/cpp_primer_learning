/*
 * Created by zhchuch.
 */

#ifndef CPP_PRIMER_EXCEPTION_MY_H
#define CPP_PRIMER_EXCEPTION_MY_H

#include <iostream>

using namespace std;

void my_exception()
{
    int x;

    while (cin >> x) {
        try {
            // program-statements
            int y = 3;
            double d = 3.14;
            cout << "x = " << x << ", y = " << y << endl;

            if (x > 4)
                throw x;
            else if (x >= 0)
                throw d;
            else
                break;
        } catch (int e) {
            // handler-statements
            cout << "int exception: e = " << e << endl;
            cout << x << endl;      // ok: catch子句 可以访问外部变量
            //cout << y << endl;    // error: catch子句 不能访问try中声明的变量
        } catch (double e) {
            //handler-statements
            cout << "double exception: e = " << e << endl;  // ok
        }
    }

    cout << x << endl;      // ok: x 作用域在整个方法内
    //cout << y << endl;    // error: y 声明于 try子句内, 无法被外部访问, y 甚至都不能被catch子句访问。
}

#endif //CPP_PRIMER_EXCEPTION_MY_H

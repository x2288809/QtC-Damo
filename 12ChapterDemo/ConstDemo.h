#ifndef CONSTDEMO_H
#define CONSTDEMO_H

#include <iostream>

using namespace std;

//1.const修饰成员变量
void ConstDemo1()
{
    int num1 = 1024;
    const int num2 = num1;
//    num2 = 2048;
    cout << num2 << endl;
}

#endif // CONSTDEMO_H

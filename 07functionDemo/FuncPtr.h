#ifndef FUNCPTR_H
#define FUNCPTR_H
#include <iostream>

using namespace std;

//声明函数

int power(int, int);

//声明函数指针

int (*ptrPower)(int, int);

//实现函数

int power(int num1, int num2)
{
    int result = 1;
    for(int i = 0; i < num2; i++)
    {
        result *= num1;
    }
    return  result;
}




#endif // FUNCPTR_H

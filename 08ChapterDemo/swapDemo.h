#ifndef SWAPDEMO_H
#define SWAPDEMO_H
#include <iostream>

using namespace std;

void swap1(int, int);
void swap2(int*, int*);
void swap3(int&, int&);
void show(const int&, const int&);

void swap1(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap2(int * pNum1, int * pNum2)
{
    int temp;
    temp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = temp;
}

void swap3(int& ref1, int& ref2)
{
    //使用引用的理由：
    //1.可以更加简便的书写代码
    //2.可以直接传递某个对象，而不只是把对象复制一份
    int temp;
    temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}
void show(const int& num1, const int& num2){
    //我们希望显示函数中，只能实现传入参数的显示功能
    //而禁止显示函数修改num1和num2的值（禁止函数内部修改引用参数值）
    //解决方案：使用const
    cout << "执行swap后：" <<num1 << "\t" << num2 << endl;

}
#endif // SWAPDEMO_H

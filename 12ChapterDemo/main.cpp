#include <QCoreApplication>
#include "integer.h"
#include <iostream>
#include "ConstDemo.h"

using namespace std;

void TestInteger();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestInteger();
    Integer int1(1024), int2(2048), int3;
    int3 = int1 + int2;
    cout << "int3 = int1 + int2重载后的结果：" << int3.IntValue() << endl;
    int3 = int1 - int2;
    cout << "int3 = int1 - int2重载后的结果：" << int3.IntValue() << endl;
    int3 = int1 * int2;
    cout << "int3 = int1 * int2重载后的结果：" << int3.IntValue() << endl;
    int3 = int1 / int2;
    cout << "int3 = int1 / int2重载后的结果：" << int3.IntValue() << endl;
    int3 = int1 % int2;
    cout << "int3 = int1 % int2重载后的结果：" << int3.IntValue() << endl;

    Integer int4;
    int4 = int3;
    cout << "int4 = int3的结果：" << int4.IntValue() << endl;

    Integer int5;
    int5 = 1024 + int4;
//    int5 = int4 + 1024;
    cout << "int5= " << int5.IntValue() << endl;

    cout << "重载了<<运算符后，可以直接打印对象：int5 = " << int5 << endl;

    return a.exec();
}

void TestInteger(){
    Integer int1(1024), int2(2048), int3;
    int3 = int1 + int2;
    cout << "int3 = int1 + int2重载后的结果：" << int3.IntValue() << endl;
}

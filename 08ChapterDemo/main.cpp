#include <QCoreApplication>
#include <iostream>
#include <swapDemo.h>

#define N 5                 //宏定义，以后在使用N的所有场合，斗回被自动替换为5
#define S(sum) num * num    //宏定义了一个S（num)函数
//以后再所有使用S(num)的蒂法，就自动被替换成 num * num

using namespace std;

//内联：替换

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int num1 = 10,num2 = 5;
    cout << "交换前：" << num1 << "\t" << num2 << endl;
    swap1(num1, num2);
//    cout << "执行swap1后：" << num1 << "\t" << num2 << endl;
    show(num1, num2);
    swap2(&num1, &num2);
    cout << "执行swap2后：" <<num1 << "\t" << num2 << endl;
    swap3(num1, num2);
    cout << "执行swap3后：" <<num1 << "\t" << num2 << endl;



    return a.exec();
}

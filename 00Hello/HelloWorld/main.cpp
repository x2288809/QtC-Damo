
#include <QCoreApplication>
#include <iostream>
// #include <cstdio>
#include <ostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hello World!" << endl;
    //cout就是C++输出，endl是控制符，表示重起一行（\n），并且还清空了缓存区 fflush(stdin)
    std::cout << "Hello World!" << std::endl;
    //等待输入，防止控制台窗口关闭

    cout << "英雄名称：寒冰射手·艾希\n";

    cout << "伤害：56\t\t攻击距离：600\n"
         << "护甲：15.5（+3.4)\t魔抗：30（+0.0）\n" << endl;

    int salary = 2500;

    cout << "小明的月薪是：" << salary << "\n" << endl;

    //已知圆柱体的半径和高，求圆柱体的体积
    float radius = 4.5f;
    float height = 90.0f;
    const float PI = 3.14f;
    double volume = PI * pow(radius, 2) * height;
    cout << "体积是：" << volume << "\n" << endl;

    //输出double类型数据
    /*控制cout的显示精度
        1.强制以小数的方式显示
        cout << fixed;
        2.控制显示的精度
        cout << setprecision(2);
    */

    //固定以小数方式，并保留小数点后2位
    cout << fixed << setprecision(2);

    double doubleNum = 10.0 / 3.0;

    cout << doubleNum << endl;


    cin.get();
    // return 0表示程序正常结束，非0为异常结束
    return 0;
    //return a.exec();
}


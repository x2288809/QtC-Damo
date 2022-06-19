#include <QCoreApplication>
#include <iostream>
#include <cmath>
//io限定符
#include <iomanip>
#include <windows.h>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    int num;
//    char ch1,ch2,ch3;
//    cout << "请输入一个数字：";
//    cin >> num;
//    cin >> ch1 >> ch2 >> ch3;
//    cout << num << "\t" << ch1 << "\t" << ch2 << "\t" << ch3 << endl;
    double attack1 = 282;
    double attack2 = 250;
    double attack3 = 240;

    cout << left;
    //填充
    cout << setfill('*');
    cout << setw(8) << attack1 <<
            setw(8) << attack2 <<
            setw(8) << attack3 << endl <<endl;

    //获得运算符所占的字节大小
    cout << sizeof (double) << endl <<endl;

    //使用程序判断用户输入的字符是否是合法的硬盘盘符
    char pan = '\0';
    cout << "请输入一个字符，我来判断是非是合法的硬盘盘符：";
    cin >> pan;

    if(pan >= 'A' && pan <= 'Z')
    {
        cout << "是合法盘符！" << endl;
    }
    else
    {
        cout << "不是合法盘符！" << endl;
    }

    double price_hemes = 35000.0;
    double price_louis = 11044.5;
    double price_chanel = 1535.0;
    double total = 0;//总价
    double zhekou = 0;//折扣
    total = price_louis + price_hemes + price_chanel;
    if(total > 50000)
    {
        zhekou = 0.7;
    }
    else
    {
        zhekou = 0.9;
    }
    total *= zhekou;
    cout << "最终付款：" << total << endl;
    total = price_louis + price_hemes + price_chanel;
    if(price_chanel > 1000 || price_hemes > 1000 ||  price_hemes > 1000 || total > 5000)
    {
        zhekou = 0.3;
    }
    cout << "最终付款：" << total << endl;
    return a.exec();
}

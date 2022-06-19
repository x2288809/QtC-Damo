#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>//集合
#include <iomanip>//控制输出格式
#include "GZDemo.h"
#include "towArrayDemo.h"
#include "FuncPtr.h"
#include "MyCalc.h"
#include "Chat.h"

using namespace std;

//

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string privateName, content, chatMsg;
    cout << "请输入对方的名称：";

    while (1) {
        getline(cin, privateName);
        cout << "请输入发送给对方的聊天信息：";
        getline(cin, content);

        chatMsg = chatTo(privateName, content);
        cout << endl << chatMsg << endl;

        cout << "请输入对方要说的话：";
        getline(cin, content);

        chatMsg = chatFrom(privateName, content);
        cout << endl << chatMsg << endl;
    }


    /*
    char op;
//    double (*ptrCalc)(double, double);
    auto ptrCalc = addition;
//    typedef double (*ptrCalc)(double, double);
//    ptrCalc ptrCalc1;
    double num1, num2;

    cout << "请输入两个操作数：";

    cin >> num1 >> num2;

    cout << "请输入运算符：";

    cin >> op;

    switch (op) {
    case '+':
        ptrCalc = addition;
        break;
    case '-':
        ptrCalc = subtraction;
        break;
    case '*':
        ptrCalc = multiplication;
        break;
    case '/':
        ptrCalc = division;
        break;
    }

    print_result(ptrCalc, num1, num2);
    */

    /*
    ptrPower = power;

    cout << power(3, 4) << endl;
    */




    /*
    //展示二维数组
    double powers[3][5] = {
        {45.5, 55.6, 66.7, 77.8, 88.4},
        {55.5, 65.6, 76.7, 87.8, 98.4},
        {15.5, 25.6, 36.7, 47.8, 58.4}
    };
    show(powers, 3);
    */

    /*
    int values[5];
    //录入数据
    input(values, sizeof(values)/sizeof (int));
    //打印数据
    print(values, sizeof(values)/sizeof (int));
    print(values, sizeof(values)/sizeof (int));
    */


//    cout << "两个数的和：" << sum(5,6) << endl;

    return a.exec();
}



#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>//����
#include <iomanip>//���������ʽ
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
    cout << "������Է������ƣ�";

    while (1) {
        getline(cin, privateName);
        cout << "�����뷢�͸��Է���������Ϣ��";
        getline(cin, content);

        chatMsg = chatTo(privateName, content);
        cout << endl << chatMsg << endl;

        cout << "������Է�Ҫ˵�Ļ���";
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

    cout << "������������������";

    cin >> num1 >> num2;

    cout << "�������������";

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
    //չʾ��ά����
    double powers[3][5] = {
        {45.5, 55.6, 66.7, 77.8, 88.4},
        {55.5, 65.6, 76.7, 87.8, 98.4},
        {15.5, 25.6, 36.7, 47.8, 58.4}
    };
    show(powers, 3);
    */

    /*
    int values[5];
    //¼������
    input(values, sizeof(values)/sizeof (int));
    //��ӡ����
    print(values, sizeof(values)/sizeof (int));
    print(values, sizeof(values)/sizeof (int));
    */


//    cout << "�������ĺͣ�" << sum(5,6) << endl;

    return a.exec();
}



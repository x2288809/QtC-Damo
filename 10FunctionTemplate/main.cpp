#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>//集合
#include <iomanip>//控制输出格式
#include "sorting.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int iNums[] = {13, 43, 54, 652, 454};
    float fNums[] = {32.4f, 2.5f, 23.4f, 323.5f};
    double dNums[] = {90.3, 32.7, 12.8, 53.9, 65.3};
    string sNums[] = {"关羽", "张飞", "赵云"};

    //int数组排序
    cout << "int数组排序前：" ;
    show(iNums, sizeof (iNums) / sizeof (iNums[0]));
    sort(iNums, sizeof(iNums) / sizeof (iNums[0]));
    cout << "int数组排序后：" ;
    show(iNums, sizeof (iNums) / sizeof (iNums[0]));

    //float数组排序
    cout << "float数组排序前：" ;
    show(fNums, sizeof (fNums) / sizeof (fNums[0]));
    sort(fNums, sizeof(fNums) / sizeof (fNums[0]));
    cout << "float数组排序后：" ;
    show(fNums, sizeof (fNums) / sizeof (fNums[0]));

    //double数组排序
    cout << "double数组排序前：" ;
    show(dNums, sizeof (dNums) / sizeof (dNums[0]));
    sort(dNums, sizeof(dNums) / sizeof (dNums[0]));
    cout << "double数组排序后：" ;
    show(dNums, sizeof (dNums) / sizeof (dNums[0]));

    //string数组打印
    cout << "string数组：" ;
    show(sNums, sizeof (sNums) / sizeof (sNums[0]));

    return a.exec();
}

#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>//����
#include <iomanip>//���������ʽ
#include "sorting.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int iNums[] = {13, 43, 54, 652, 454};
    float fNums[] = {32.4f, 2.5f, 23.4f, 323.5f};
    double dNums[] = {90.3, 32.7, 12.8, 53.9, 65.3};
    string sNums[] = {"����", "�ŷ�", "����"};

    //int��������
    cout << "int��������ǰ��" ;
    show(iNums, sizeof (iNums) / sizeof (iNums[0]));
    sort(iNums, sizeof(iNums) / sizeof (iNums[0]));
    cout << "int���������" ;
    show(iNums, sizeof (iNums) / sizeof (iNums[0]));

    //float��������
    cout << "float��������ǰ��" ;
    show(fNums, sizeof (fNums) / sizeof (fNums[0]));
    sort(fNums, sizeof(fNums) / sizeof (fNums[0]));
    cout << "float���������" ;
    show(fNums, sizeof (fNums) / sizeof (fNums[0]));

    //double��������
    cout << "double��������ǰ��" ;
    show(dNums, sizeof (dNums) / sizeof (dNums[0]));
    sort(dNums, sizeof(dNums) / sizeof (dNums[0]));
    cout << "double���������" ;
    show(dNums, sizeof (dNums) / sizeof (dNums[0]));

    //string�����ӡ
    cout << "string���飺" ;
    show(sNums, sizeof (sNums) / sizeof (sNums[0]));

    return a.exec();
}

#ifndef MYCALC_H
#define MYCALC_H
#include <iostream>

using namespace std;

//�Զ����������ʹ�ú���ָ��

/** �ӷ����� */
double addition(double, double);
/** �������� */
double subtraction(double, double);
/** �˷����� */
double multiplication(double, double);
/** �������� */
double division(double, double);
/** ��ӡ������ */
double print_result(double (*)(double, double), double, double);

double addition(double num1, double num2)
{
    return num1 + num2;
}

double subtraction(double num1, double num2)
{
    return num1 - num2;
}

double multiplication(double num1, double num2)
{
    return num1 * num2;
}

double division(double num1, double num2)
{
    if(num2 == 0)
    {
        cout << "����������0" << endl;
        return 0;
    }else
    return num1 / num2;
}

double print_result(double (*ptrCalc)(double, double), double num1, double num2)
{
    //���ú�������ӡ���
    double result = ptrCalc(num1, num2);
    cout << "������Ϊ��" << result;
}

#endif // MYCALC_H

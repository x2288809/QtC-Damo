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
    //ʹ�����õ����ɣ�
    //1.���Ը��Ӽ�����д����
    //2.����ֱ�Ӵ���ĳ�����󣬶���ֻ�ǰѶ�����һ��
    int temp;
    temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}
void show(const int& num1, const int& num2){
    //����ϣ����ʾ�����У�ֻ��ʵ�ִ����������ʾ����
    //����ֹ��ʾ�����޸�num1��num2��ֵ����ֹ�����ڲ��޸����ò���ֵ��
    //���������ʹ��const
    cout << "ִ��swap��" <<num1 << "\t" << num2 << endl;

}
#endif // SWAPDEMO_H

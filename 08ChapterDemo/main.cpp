#include <QCoreApplication>
#include <iostream>
#include <swapDemo.h>

#define N 5                 //�궨�壬�Ժ���ʹ��N�����г��ϣ����ر��Զ��滻Ϊ5
#define S(sum) num * num    //�궨����һ��S��num)����
//�Ժ�������ʹ��S(num)�ĵٷ������Զ����滻�� num * num

using namespace std;

//�������滻

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int num1 = 10,num2 = 5;
    cout << "����ǰ��" << num1 << "\t" << num2 << endl;
    swap1(num1, num2);
//    cout << "ִ��swap1��" << num1 << "\t" << num2 << endl;
    show(num1, num2);
    swap2(&num1, &num2);
    cout << "ִ��swap2��" <<num1 << "\t" << num2 << endl;
    swap3(num1, num2);
    cout << "ִ��swap3��" <<num1 << "\t" << num2 << endl;



    return a.exec();
}

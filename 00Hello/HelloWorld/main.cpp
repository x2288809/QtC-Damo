
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
    //cout����C++�����endl�ǿ��Ʒ�����ʾ����һ�У�\n�������һ�����˻����� fflush(stdin)
    std::cout << "Hello World!" << std::endl;
    //�ȴ����룬��ֹ����̨���ڹر�

    cout << "Ӣ�����ƣ��������֡���ϣ\n";

    cout << "�˺���56\t\t�������룺600\n"
         << "���ף�15.5��+3.4)\tħ����30��+0.0��\n" << endl;

    int salary = 2500;

    cout << "С������н�ǣ�" << salary << "\n" << endl;

    //��֪Բ����İ뾶�͸ߣ���Բ��������
    float radius = 4.5f;
    float height = 90.0f;
    const float PI = 3.14f;
    double volume = PI * pow(radius, 2) * height;
    cout << "����ǣ�" << volume << "\n" << endl;

    //���double��������
    /*����cout����ʾ����
        1.ǿ����С���ķ�ʽ��ʾ
        cout << fixed;
        2.������ʾ�ľ���
        cout << setprecision(2);
    */

    //�̶���С����ʽ��������С�����2λ
    cout << fixed << setprecision(2);

    double doubleNum = 10.0 / 3.0;

    cout << doubleNum << endl;


    cin.get();
    // return 0��ʾ����������������0Ϊ�쳣����
    return 0;
    //return a.exec();
}


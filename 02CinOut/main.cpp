#include <QCoreApplication>
#include <iostream>
#include <cmath>
//io�޶���
#include <iomanip>
#include <windows.h>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    int num;
//    char ch1,ch2,ch3;
//    cout << "������һ�����֣�";
//    cin >> num;
//    cin >> ch1 >> ch2 >> ch3;
//    cout << num << "\t" << ch1 << "\t" << ch2 << "\t" << ch3 << endl;
    double attack1 = 282;
    double attack2 = 250;
    double attack3 = 240;

    cout << left;
    //���
    cout << setfill('*');
    cout << setw(8) << attack1 <<
            setw(8) << attack2 <<
            setw(8) << attack3 << endl <<endl;

    //����������ռ���ֽڴ�С
    cout << sizeof (double) << endl <<endl;

    //ʹ�ó����ж��û�������ַ��Ƿ��ǺϷ���Ӳ���̷�
    char pan = '\0';
    cout << "������һ���ַ��������ж��Ƿ��ǺϷ���Ӳ���̷���";
    cin >> pan;

    if(pan >= 'A' && pan <= 'Z')
    {
        cout << "�ǺϷ��̷���" << endl;
    }
    else
    {
        cout << "���ǺϷ��̷���" << endl;
    }

    double price_hemes = 35000.0;
    double price_louis = 11044.5;
    double price_chanel = 1535.0;
    double total = 0;//�ܼ�
    double zhekou = 0;//�ۿ�
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
    cout << "���ո��" << total << endl;
    total = price_louis + price_hemes + price_chanel;
    if(price_chanel > 1000 || price_hemes > 1000 ||  price_hemes > 1000 || total > 5000)
    {
        zhekou = 0.3;
    }
    cout << "���ո��" << total << endl;
    return a.exec();
}

#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    float numFloat = 10 / 3.0;
//    double numDouble = 10 / 3.0;
//    cout << fixed;//�ø����͹̶������ʵķ�ʽ��ʾ
//    cout << setprecision(2);//������ʾ��С��λ��
//    cout << "numFloat:" << numFloat * 10000 << endl;
//    cout << "numDouble:" << numDouble * 10000 << endl;

    cout << fixed << setprecision(2) << endl;
    string heroName = "��������֮��������";
    //�˺�
    double heroHurt = 57.88;
    double heroHurtRange = 4.50;
    //��������
    int heroHertLength = 172;
    //���ף��������
    double heroPhysicalDefense = 27.54;
    double heroPhysicalDefenseRange = 3.00;
    //ħ����ħ������
    double heroMagicDefense = 32.10;
    double heroMagicDefenseRange = 1.25;
    //����ֵ
    double heroHealth = 616.28;
    double heroHealthRange = 84.25;
    //�����ظ�
    double heroHealthRecovery = 7.84;
    double heroHealthRecoveryRange = 0.50;
    //����ֵ
    double heroMana = 0.00;
    double heroManaRange = 0.00;
    //�����ظ�
    double heroManaRecovery = 0.00;
    double heroManaRecoveryRange = 0.00;
    //����
    int heroMovementSpeed = 340;
    //��λ
    string heroOrientation = "�ϵ� ���� ��Ұ";
    //��ȯ
    long userTickets = 450;
    //���
    long userGold = 10000;

    cout << "������" << heroName << endl;
    cout << "�˺���" << heroHurt << "(+" << heroHurtRange << ")\t"
         << "�������룺" << heroHertLength << endl;
    cout << "���ף�" << heroPhysicalDefense << "(+" << heroPhysicalDefenseRange << ")\t"
         << "ħ����" << heroMagicDefense << "(+" << heroMagicDefenseRange << ")" << endl;
    cout << "������" << heroHealth << "(+" << heroHealthRange << ")\t"
         << "�����ظ���" << heroHealthRecovery << "(+" << heroHealthRecoveryRange << ")" << endl;
    cout << "����ֵ��" << heroMana << "(+" << heroManaRange << ")\t"
         << "�����ظ���" << heroManaRecovery << "(+" << heroManaRecoveryRange << ")" << endl;
    cout << "���٣�" << heroMovementSpeed << "\t\t"
         << "��λ��" << heroOrientation << endl;
    cout << "��ȯ��" << userTickets << "\t\t"
         << "��ң�" << userGold << endl;


    cout << "CHAR��" << CHAR_MIN << " ~ " << CHAR_MAX << endl;

    cout << "UCHAR_MAX��" << UCHAR_MAX << endl;


    cin.get();

    return 0;
    //return a.exec();
}

#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //ʹ��ѭ��ģ��ȭ�ʶ�ս

    int hp1 = 100;//������HP
    int hp2 = 100;//���ɾ�HP

    int attack1 = 0; //�����ֵĹ�����
    int attack2 = 0; //���ɾ��Ĺ�����
    int randNum;    //���������ҹ����Ⱥ�����������
    int i = 1;      //�غ���

    srand(time(NULL));

    cout << "���ɾ�HP��" << hp2 << endl;
    cout << "������HP��" << hp1 << endl;

    while(hp1 > 0 && hp2 > 0){
        //1.ģ����ҳ��У����Բ��������������/ż���ķ�ʽ������˭�Ƚ��й���
        //���� - �������ȹ�����ż�����ɾ���
        cout << endl;
        cout << "�� " << i << " �غ�" << endl;
        randNum = rand();
        if (randNum % 2 == 1){//����
            cout << "���������ȷ��𹥻�" << endl;
            //rand()Ϊ�����ȡ0-1֮��������
            attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            hp2 -= attack1;
            cout << "���ɾ����ܵ� " << attack1 << " �˺�" << endl;
            //������ɾ�δ����������ֻ�����ܵ��˺�
            if(hp2 > 0){
                hp1 -= attack2;
                cout << "���ɾ����𷴻�" << endl;
                cout << "���������ܵ� " << attack2 << " �˺�" << endl;
            }
        }
        else{//ż��
            cout << "���ɾ����ȷ��𹥻�" << endl;
            attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            hp1 -= attack2;
            cout << "���������ܵ� " << attack2 << " �˺�" << endl;
            //���������δ��������ɾ�������ܵ��˺�
            if(hp1 > 0){
                hp2 -= attack1;
                cout << "�����ַ��𷴻�" << endl;
                cout << "���ɾ����ܵ� " << attack1 << " �˺�" << endl;
            }
        }
        //��ӡ��ս���
        cout << endl;
        cout << "���ɾ�HP��" << hp2 << endl;
        cout << "������HP��" << hp1 << endl;
        i++;
    }
    if(hp1 <= 0){
        cout << "\n������������" << endl;
        cout << "���ɾ����ʤ��" << endl;
    }
    if(hp2 <= 0){

        cout << "\n���ɾ�������" << endl;
        cout << "�����ֻ��ʤ��" << endl;
    }


    /*
    int i = 1;
    while (i <= 10) {
        cout << "С�˱�ס�����ݵĳǱ�...\t��" << i << "��\n";
        i++;
    }
    */

    /*
    double money = 800.0;
    int year = 2015;
    while (money <= 2000) {
        year++;
        money = money * (1+ 0.25);
        cout << "��" << year << "�꣬Ӫҵ��ﵽ" << money << "�ڣ�" << endl;
    }
    cout << "��" << year << "�꣬Ӫҵ���2000��" << endl;
    */

    /*
    int n = 0;
    while(n++ <= 2);//while(n <= 2) n++;
    cout << n;
    */


    /*
    int k =1, n = 10, m = 1;
    while(k <= n)
    {
        m *= 2;
        n--;
        cout << "m = " << m << "\t\t";
        if(n != 0)
        cout << "n = " << n << endl;
    }
    */

    /*
    int num = 1;
    int sum = 0;
    while(num <= 100){
        sum = num + sum;
        cout << "sum = " << sum << "\t\t"
             << "num = " << num << endl;
        num++;
    }

    cin.get();

    */

    return 0;

//    return a.exec();
}

#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //����˫ѭ��
    //��ӡ�Ǻ�*ͼ��
    //���ѭ�������У����������У�
    //�ڲ�ѭ�������У��������е�ͼ�Σ�
    //��ӡ����
    //1.��ӡ��������
    for(int i = 0; i< 4;i++){
        for(int j = 0;j <= 2 - i;j++){

            cout << " ";
        }
        for(int j = 0;j <= 2 * i;j++){

            cout << (char)('A'+i);
//            cout << "*";
        }
        cout << endl;
    }
    //2.��ӡ��������
    for(int i = 0; i< 4;i++){
        for(int j = 0;j <= i;j++){

            cout << " ";
        }
        for(int j = 0;j <= 4 - 2 * i;j++){
            cout << (char)('C'- i);
//            cout << "*";
        }
        cout << endl;
    }

    //��ӡ����������
    //1.��ӡ��������
    for(int i = 0; i< 4;i++){
        for(int j = 0;j <= 2 - i;j++){

            cout << " ";
        }
        for(int j = 0;j <= 2 * i;j++){
            //��ֵ����ѭ��������
            if(j == 0 || j == 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    //2.��ӡ��������
    for(int i = 0; i< 4;i++){
        for(int j = 0;j <= i;j++){

            cout << " ";
        }
        for(int j = 0;j <= 4 - 2 * i;j++){
            //��j�Ǽ�ֵ������´�ӡ�Ǻţ������ӡ�ո�
            if(j == 0 || j == 4 - 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }



    /*
    //��1-100֮���ż����
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        //��������
        if(i % 2 == 1)
            continue;
        sum += i;
        cout << "��ǰż��:" << i << "\t��ǰż����:" << sum << endl;
    }
    cout << "\n1-100֮���ż����:" << sum << endl;
     */


    /*
    //ѭ������5����ҵ����ѣ�ͳ�����Ѷ����500���������
    double money;
    int playerCount = 0;
    for(int i =0; i < 5; i++){
        cout << "�����뵱ǰ��ҵ����Ѷ";
        cin >> money;
        //����500���ϵ����
        if(money >= 500)
            continue;
        playerCount++;
    }
    cout << "���ѵ���500������� " << playerCount << " ��" << endl;
    */

    /*
    //��������Ϸ
    //�������Ʒ�۸�
    int price;
    //�����
    srand(time(NULL));
    price = (rand() % 1000) + (rand() % 101)/10;
    cout << price << endl;
    //�û��²�Ĵ���
    int guessPrice = 0;
    int guessCount = 0;
    while (1) {
        guessCount++;
        cout << "�� " << guessCount << " �β²⣬������������Ʒ�ļ۸�";
        cin >> guessPrice;
        if(guessPrice > price){
            cout << "�´��ˣ���" << endl;
        }
        else if(guessPrice < price){
            cout << "��С�ˣ���" << endl;
        }else if(guessPrice == price){
            cout << "��ϲ���¶���������" << endl;
            break;
        }

    }
    if(guessCount == 1){
        cout << "1�ξ��У�һ��������Ů�����㣬�����صȽ���iPhone20 plus plus ������ 1T" << endl;
    }else if(guessCount > 1 && guessCount <= 3){
        cout << "���˿��ˣ�����һ�Ƚ���iPhone20 ������ 256G" << endl;
    }else if(guessCount > 3 && guessCount <= 5){
        cout << "ţ�ƣ����˶��Ƚ���iPhone20 128G" << endl;
    }else{
        cout << "���� " << guessCount << " �Σ��Ų��У������ӵ���ɣ���" << endl;
    }
    */

    /*
    //ʹ��ѭ����ӡ1997��7�µ�����
    //��֪��1997��7��1�������ڶ�����ۻع�ٹ�ͬ��
    //1.�������
    int day = 31;
    int dayOfWeek = 2;  //7�µ�һ�����ܶ����·�1�յ�����
    cout << "1997��7��" << endl;
    cout << "һ\t��\t��\t��\t��\t��\t��" << endl;
    for(int i = 0;i < dayOfWeek - 1;i++){
        cout << '\t';
    }
    //2.��дѭ��
    //3.��дѭ���弰ѭ�����ڵ�����
    for(int i = 0;i < day; i++){
        cout << i +1;
        if((dayOfWeek +i) % 7 == 0){
            cout << '\n';
        }else{
            cout << '\t';
        }
    }
    */

    /*
    //����ƽ������
    //1.������� 2.����������дѭ�� 3.��дѭ������
    double salary = 0;      //����
    double sumSalary = 0;   //�ܹ���
    double avgSalary = 0;   //ƽ������
    const int YEAR = 6;
    for(int i = 0;i < YEAR; i++){
        cout << "������� " << i + 1 << "�µĹ��ʣ�";
        cin >> salary;
        //�ۼ�
        sumSalary += salary;
    }
    avgSalary = sumSalary / YEAR;
    cout << "�����ƽ������Ϊ��" << avgSalary << endl;
    */
    return a.exec();
}

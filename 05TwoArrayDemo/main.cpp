#include <QCoreApplication>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <vector>
#include <algorithm>//�㷨ͷ�ļ�

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //�������� vector<double> vec1;

    vector<double> vecDouble = {98.5, 45.6, 67.4, 76.3};

    //������ʽ1
    cout << "���飺";
    for(int i = 0; i < vecDouble.size(); i++){
        cout << vecDouble[i] << "\t";
    }
    cout << endl;

    //�������в�������
    vecDouble.push_back(100.8);
    cout << "�������֣�100.8\n";
    //������ʽ2�����ϵ�ͨ�ñ�����ʽ��ʹ�õ����� iterator
    //һ���ǵ������Ļ����÷�
    vector<double>::iterator it;//�õ�����������
    //it.begin �ӵ�һ��Ԫ�ؿ�ʼ����
    cout << "�������ֺ�����飺";
    for(it = vecDouble.begin();it != vecDouble.end(); ++it){//��it++Ҳ���ԣ�����++it���Ը��õ�ʹ�û����Ļ�������
        cout << *it << "\t";
    }
    cout << endl;

    //sort()���մ�С��������
    sort(vecDouble.begin(),vecDouble.end());
    cout << "���������飺";
    for(it = vecDouble.begin();it != vecDouble.end(); ++it){
        cout << *it << "\t";
    }
    cout << endl;

    //reverse��������
    reverse(vecDouble.begin(),vecDouble.end());
    cout << "���������飺";
    for(it = vecDouble.begin();it != vecDouble.end(); ++it){
        cout <<  *it << "\t";
    }

    /*
    //ʹ�ö�ά����
    string stuNames[] {"����", "����", "�ŷ�"};
    string courseNames[] {"����", "��ѧ", "Ӣ��"};
    const int ROW = 3;
    const int COL = 3;
    double scores[ROW][COL];
    for(int i = 0; i < ROW;i++){
        for(int j = 0; j < COL;j++){
            cout << stuNames[i] << "��" << courseNames[j] << "�ĳɼ���";
            cin >> scores[i][j];
        }
    }

    //��ӡ���
    cout << "\t";
    for(int i = 0; i < COL; i++){
        cout << courseNames[i] << "\t";
    }
    cout << endl;
    for(int i = 0; i < ROW; i++){
        cout << stuNames[i] << "\t";
        for(int j = 0; j < COL; j++){
            cout << scores[i][j] << "\t";
        }
        cout << endl;
    }
    */

    return a.exec();
}

#ifndef GZDEMO_H
#define GZDEMO_H
//ʹ�ú���������С�������ɼǡ��еĻ�������¼�뼰������
//�������ԣ����������������������¡�����
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

//��������
/** ���빫�ٵĸ�������ֵ */
void input(int [], int);
/** ������ٵĸ�������ֵ */
void print(const int *, int);
/** ɾ��һ�����ٵ����� */
void delGirlBaseinfo(string);
/** �򵥵���� */
int sum(int, int);

string valueNames[] = {"����", "����", "����", "����", "����"};

//����ʵ��
void input(int values[], int len)
{
    if(len > 5)
    {
        cout << "���鳤��ֻ����5���ڣ�����" << endl;
        return;//�˳�����ֵΪvoid�ĺ���
    }
    for(int i = 0;i < len;i++)
    {
        cout << valueNames[i] << "��" ;
        cin >> values[i];
    }
}

void print(const int * values, int len)
{
    for(int i = 0;i < len;i++)
    {
        cout << valueNames[i] << "��" << values[i] << endl;
    }
}

/*
void delGirlBaseinfo(string valueNamesTemp)
{
    for(int i = 0; i < sizeof (valueNames) / sizeof(string);i++){
        if(valueNamesTemp != valueNames[i]){
            cout << "�����ڸ�����ֵ������" << endl;
            return;
        }
    }
    valueNames.erase(valueNamesTemp);
}
*/

int sum(int num1,int num2){
    int result = num1 + num2;
    return result;
}

#endif // GZDEMO_H

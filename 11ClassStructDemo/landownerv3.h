#ifndef LANDOWNERV3_H
#define LANDOWNERV3_H
#include <iostream>

using namespace std;


class landOwnerV3
{
    //ʡ����private
    long _score; //������ֱ���ֵΪ��������ķ���������Ա����score�������ز���װ
    string _name;
    int cards[20];
public:

    landOwnerV3();
    void showScore();
    string getName(string name)
    {
        _name = name;
        return _name;
    }
    //ʹ�÷���/����ʵ�ֶԳ�Ա�����ķ�װGet/Set����
    void SetScore(long);

};

#endif // LANDOWNERV3_H

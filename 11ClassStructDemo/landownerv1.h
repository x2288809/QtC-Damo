#ifndef LANDOWNERV1_H
#define LANDOWNERV1_H
#include <iostream>

using namespace std;
/*
 *  .h�ļ�һ�����ʵ�ֵ�����������ͨ������ģ��������������ʵ�ֹ�������
 *  ���飺ֻҪ���Ǵ�ģ�壬һ��ʹ�� .h��Ϊͷ�ļ���׺��ʹ��.cpp�ļ���Ϊ������ʵ��
 **/

class LandOwnerV1
{

public://���εĳ�Ա������ٷ������Է���

    string name;    /** �������� */
    long score;     /** �������� */
    int cards[20];  /** ������������ */

public:

    LandOwnerV1();  //���캯��������
//    ~LandOwnerV1(); //��������������

    void TouchCard(int);//�������Ʒ���
    void showScore();   //��������ʾ���ַ���

private://���εĳ�Աֻ�������л�����Ԫ�����п��Է���

};

#endif // LANDOWNERV1_H

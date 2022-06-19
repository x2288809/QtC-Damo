#ifndef CHAT_H
#define CHAT_H
#include <iostream>
#include <cmath>

using namespace std;
/**
 * ��ĳ������    - �����ַ�����ƴ�ӣ������ʽ��
 * @param toName    ������������
 * @param content   ���������
 * @return          ��ĳ�涨�ĸ�ʽƴ��������Ϣ����ַ���
 */
string chatTo(const string&, const string&);

string chatFrom(const string&, const string&);


string chatTo(const string& toName, const string& content)
{
    string msg = "�� �����ĵض� [" + toName + "] ˵��" + content;
    return msg;
}

string chatFrom(const string& froName, const string& content)
{
    string msg = "�� [" + froName + "] ���ĵض���˵��" + content;
    return msg;
}

#endif // CHAT_H

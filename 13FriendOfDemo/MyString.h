#ifndef STRING_H
#define STRING_H
#include <iostream>
#include <cstring>

using namespace std;

//�Զ�����ַ�����װ��

class String
{
public:
    String();
    String(char *);
    virtual ~String();

    //���ظ�ֵ��������������е�ÿ��Ԫ�ض����и�ֵ��������ֻ��ֵ����ָ��
    const String & operator=(const String &);

    friend ostream & operator<<(ostream &, const String &);

private:
    int m_length;
    char * m_value;
};

#endif // STRING_H

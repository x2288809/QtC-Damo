#include "MyString.h"


String::String() : m_length(0)
{
//    char * str = "";        //����Ϊ0������ʵ�ʵ��ַ������л����Ψһ��Ԫ�أ�\0
    this->m_value = new char[m_length + 1];
    this->m_value[0] = '\0';
}
String::String(char * str)
{
    //��������ַ���str��ֵ������ǰ�����е�m_value��
    if(NULL == str)
    {
        this->m_value = new char[1];
        this->m_value[0] = '\0';
        return ;
    }
    //���Ҫ��ֵ�ַ����ĳ���
    m_length = strlen(str);
    //Ϊ\0����һ���ռ�
    m_value = new char[m_length + 1];
    strcpy(m_value, str);
}

const String & String::operator=(const String & str)
{
    if(this == &str) return *this;
    delete[] m_value;
    m_length = str.m_length;
    m_value = new char[m_length + 1];
    strcpy(m_value, str.m_value);
    return *this;
}

ostream & operator<<(ostream & out, const String & str)
{
    out << str.m_value << "\n";
//    out << "m_value�ĳ��ȣ�" << str.m_length;
    printf("%p", str.m_value);
    return out;
}

String::~String()
{
    delete[] m_value;
}

#include "mystring.h"
#include <cstring>


MyString::MyString()
{
    //    char * str = "";
        this->m_value = new char[1];
        this->m_value[0] = '\0';
}

MyString::MyString(char * str)
{

    strcpy(m_value, str);
}

ostream & operator<<(ostream & out, const MyString & str)
{
    out << str.m_value << "\n";
    out << "m_value的长度：" << str.m_value;
    return out;
}


MyString::~MyString()
{
    delete[] m_value;
}

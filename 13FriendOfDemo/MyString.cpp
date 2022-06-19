#include "MyString.h"


String::String() : m_length(0)
{
//    char * str = "";        //长度为0，但是实际的字符数组中会存在唯一的元素：\0
    this->m_value = new char[m_length + 1];
    this->m_value[0] = '\0';
}
String::String(char * str)
{
    //将传入的字符串str的值赋给当前对象中的m_value、
    if(NULL == str)
    {
        this->m_value = new char[1];
        this->m_value[0] = '\0';
        return ;
    }
    //获得要赋值字符串的长度
    m_length = strlen(str);
    //为\0留出一个空间
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
//    out << "m_value的长度：" << str.m_length;
    printf("%p", str.m_value);
    return out;
}

String::~String()
{
    delete[] m_value;
}

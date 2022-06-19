#ifndef STRING_H
#define STRING_H
#include <iostream>
#include <cstring>

using namespace std;

//自定义的字符串包装类

class String
{
public:
    String();
    String(char *);
    virtual ~String();

    //重载赋值运算符，将数组中的每个元素都进行赋值，而不是只赋值数组指针
    const String & operator=(const String &);

    friend ostream & operator<<(ostream &, const String &);

private:
    int m_length;
    char * m_value;
};

#endif // STRING_H

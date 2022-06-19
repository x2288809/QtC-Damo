#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>



using namespace std;

class MyString
{
public:
    MyString();
    MyString(char *);

    virtual ~MyString();

    friend ostream & operator<<(ostream &, const string &);

protected:

private:
    /** 字符串的实际长度 - 不包括/0 */
    int m_length;
    /** 实际存储字符的字符数组 */
    char * m_value;
};

#endif // MYSTRING_H

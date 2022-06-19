#ifndef STRING_H
#define STRING_H

#include <iostream>
//#include <cstring>

using namespace std;

class String
{
public:
    String();
    virtual ~String();

    friend ostream & operator<<(ostream &, const string &);

private:
    /** 字符串的实际长度 - 不包括/0 */
    int m_length;
    /** 实际存储字符的字符数组 */
    char * m_value;
};

#endif // STRING_H

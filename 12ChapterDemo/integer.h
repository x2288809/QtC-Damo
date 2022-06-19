#ifndef INTEGER_H
#define INTEGER_H
#include <iostream>

using namespace std;

//我们自己定义的整形类，将整型封装成类，以便shi'xian实现面向对象的封装

class Integer
{
public:
    Integer();
    Integer(int value) : m_value(value){}

    //重载 “+” 运算符
    Integer operator+(Integer other);

    Integer operator-(Integer other);
    Integer operator*(Integer other);
    Integer operator/(Integer other);
    Integer operator%(Integer other);
    const Integer & operator=(const Integer&);


    //二元运算符建议采用友元方式重载
    friend const Integer operator+(int intValue, const Integer&);

    friend ostream & operator<<(ostream&,const Integer&);

    int IntValue(){return m_value;}


private:
    int m_value;        //实际的整形数字（member）
};

#endif // INTEGER_H

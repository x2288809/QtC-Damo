#include "integer.h"


//调用默认构造时，会为私有参数m_value赋一个默认值为0
Integer::Integer() : m_value(0)
{

}
//重载 “+” 运算符
Integer Integer::operator+(Integer other)
{
    Integer result(this->m_value + other.m_value);
    return result;
}

//使用友元函数不需要域运算符
const Integer operator+(int intValue, const Integer& other)
{
    cout << "使用友元方式重载了+运算符，实现int类型和Integer类型的相加" << endl;
    return Integer(intValue + other.m_value);
}

ostream & operator<<(ostream & out,const Integer & num)
{
    out << num.m_value;
    return out;
}

Integer Integer::operator-(Integer other)
{
    Integer result(this->m_value - other.m_value);
    return result;
}

Integer Integer::operator*(Integer other)
{
    Integer result(this->m_value * other.m_value);
    return result;
}

Integer Integer::operator/(Integer other)
{
    Integer result(this->m_value / other.m_value);
    return result;
}

Integer Integer::operator%(Integer other)
{
    Integer result(this->m_value % other.m_value);
    return result;
}
const Integer & Integer::operator=(const Integer & other)
{
    //条款11：如果时自我赋值，就不要座任何事情
    if(this == &other)//证同测试
        return *this;
    this->m_value = other.m_value;

    return *this;
}

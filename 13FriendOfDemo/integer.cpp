#include "integer.h"

Integer::Integer() : m_value(0)
{

}
/** 重载+运算符 */
Integer Integer::operator+(Integer other)
{
    return Integer(this->m_value + other.m_value);
}
/** 重载-运算符 */
Integer Integer::operator-(Integer other)
{
    return Integer(this->m_value - other.m_value);
}
/** 重载*运算符 */
Integer Integer::operator*(Integer other)
{
    return Integer(this->m_value * other.m_value);
}
/** 重载/运算符 */
Integer Integer::operator/(Integer other)
{
    if(other.m_value == 0)
    {
        return 0;
    }else
    {
        return Integer(this->m_value / other.m_value);
    }
}
/** 重载%运算符 */

Integer Integer::operator%(Integer other)
{
    return Integer((int)(this->m_value) % (int)(other.m_value));
}


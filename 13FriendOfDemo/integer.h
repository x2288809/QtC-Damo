#ifndef INTEGER_H
#define INTEGER_H


class Integer
{
public:
    Integer();
    Integer(double value) : m_value(value)
    {}

    /** 重载+运算符 */
    Integer operator+(Integer);
    /** 重载-运算符 */
    Integer operator-(Integer);
    /** 重载*运算符 */
    Integer operator*(Integer);
    /** 重载/运算符 */
    Integer operator/(Integer);
    /** 重载/%运算符 */
    Integer operator%(Integer);


    double IntValue(){return m_value;}


private:
    double m_value;
};

#endif // INTEGER_H

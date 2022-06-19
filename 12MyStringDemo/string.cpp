#include "string.h"

String::String() : m_length(0)
{
//    char * str = "";
    this->m_value = new char[1];
    this->m_value[0] = '\0';
}

String::~String()
{
    delete[] m_value;
}

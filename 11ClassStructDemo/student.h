#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
private:

    string m_Name;
    string m_desc;
    int m_age;
    /** 学生的成绩的科数 */
    int scoreCount;
    /** 学生的分数数组 */
    float* scores;

public:

    //构造函数的重载规则与普通函数重载规则相同
    Student();
    Student(string,string);   //带参构造
    Student(int);   //如果构造函数中，只有一个是带唯一的参数 Student stu4 = 50;
    //如果加一个Student(string);的构造函数就不能用Student stu5 = "杰克马";了
    ~Student();
    /** 初始化学生成绩数组，默认分配1个元素空间 */
    void InitScores();
    /** 向scores数组中添加分数 */
    void AddScore(float);
    void ShowInfo();

    //书写函数，要求返回学霸对象
    /** 获得计算总分 */
    float GetSumScore();

    Student& GetSuperSchiolar(Student&);


    string GetName()
    {
        return m_Name;
    }

    void SetName(string val)
    {
        m_Name = val;
    }

    string GetDesc()
    {
        return m_desc;
    }

    void SetDesc(string val)
    {
        m_desc = val;
    }

    int GetAge()
    {
        return m_age;
    }

    void SetAge(int val)
    {
        if(val < 0)
        {
            m_age = 18;
        }else
        m_age = val;
    }

};

#endif // STUDENT_H

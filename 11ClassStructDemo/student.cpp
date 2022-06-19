#include "student.h"
#include <iostream>

using namespace std;

Student::Student()
{
    cout << "默认构造" << endl;

}

void Student::InitScores()
{
    this->scores = new float[1];
    this->scoreCount = 1;
    cout << "完成默认值赋值" << endl;
}

void Student::AddScore(float score)
{
    this->scores[(this->scoreCount) - 1] = score;
    //1.创建一个新的数组，分配scoreCount + 1个空间
    //2.赋值原数组中的内容到新数组中
    //3.scoreCount++
    //4.scores指向新数组，不要旧的数组了
    //创建新的指针数组
    float* newScores = new float[scoreCount + 1];
    //创建一个指针数组指向旧的数组
    float* oldScores = scores;
    //赋值原数组中的内容到新数组中
    memcpy(newScores, scores,sizeof(float) * scoreCount);
    //扩大
    scoreCount++;
    scores = newScores;
    delete oldScores;
    cout << "完成一个分数的添加" << endl;
}

Student::Student(int age)
{
    SetAge(age);
    cout << "调用带参构造Student(int age)：\t" << age << endl;
}

void Student::ShowInfo()
{
    cout << "开始ShowInfo：" << endl;
    cout << m_desc << m_Name << endl;
    for(int i = 0; i < scoreCount - 1; i++)
    {
        cout << this->scores[i] << "\t";
    }
    cout << endl;
}
/**
 * @brief Student::GetSuperSchiolar
 * @param otherStu  要对比的另外一个学生对象
 * @return 返回总分比较大的那个学生对象
 */
Student& Student::GetSuperSchiolar(Student & otherStu)
{
    //假如这个学生的总分比别人高
    if(this->GetSumScore() > otherStu.GetSumScore())
    {
        return *this;//返回当前对象的引用
    }else
        return otherStu;
}

float Student::GetSumScore()
{
    cout << "开始GetSumScore：" << endl;
    float sumScore = 0;
    for(int i = 0; i < scoreCount - 1; i++)
    {
        sumScore += scores[i];
    }
    cout << "总分是：" << sumScore << endl;
    return sumScore;
}

Student::Student(string name, string desc) : m_Name(name), m_desc(desc)
{
//    m_Name = name;//等价写法：    SetName(name);
//    SetDesc(desc);
    cout << "调用带参构造Student(string name, string desc)：" << name << "\t" << desc << endl;
}

Student::~Student()
{
    cout << m_Name << "被释放" << endl;
    delete this->scores;
}

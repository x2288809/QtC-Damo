#include "student.h"
#include <iostream>

using namespace std;

Student::Student()
{
    cout << "Ĭ�Ϲ���" << endl;

}

void Student::InitScores()
{
    this->scores = new float[1];
    this->scoreCount = 1;
    cout << "���Ĭ��ֵ��ֵ" << endl;
}

void Student::AddScore(float score)
{
    this->scores[(this->scoreCount) - 1] = score;
    //1.����һ���µ����飬����scoreCount + 1���ռ�
    //2.��ֵԭ�����е����ݵ���������
    //3.scoreCount++
    //4.scoresָ�������飬��Ҫ�ɵ�������
    //�����µ�ָ������
    float* newScores = new float[scoreCount + 1];
    //����һ��ָ������ָ��ɵ�����
    float* oldScores = scores;
    //��ֵԭ�����е����ݵ���������
    memcpy(newScores, scores,sizeof(float) * scoreCount);
    //����
    scoreCount++;
    scores = newScores;
    delete oldScores;
    cout << "���һ�����������" << endl;
}

Student::Student(int age)
{
    SetAge(age);
    cout << "���ô��ι���Student(int age)��\t" << age << endl;
}

void Student::ShowInfo()
{
    cout << "��ʼShowInfo��" << endl;
    cout << m_desc << m_Name << endl;
    for(int i = 0; i < scoreCount - 1; i++)
    {
        cout << this->scores[i] << "\t";
    }
    cout << endl;
}
/**
 * @brief Student::GetSuperSchiolar
 * @param otherStu  Ҫ�Աȵ�����һ��ѧ������
 * @return �����ֱܷȽϴ���Ǹ�ѧ������
 */
Student& Student::GetSuperSchiolar(Student & otherStu)
{
    //�������ѧ�����ֱܷȱ��˸�
    if(this->GetSumScore() > otherStu.GetSumScore())
    {
        return *this;//���ص�ǰ���������
    }else
        return otherStu;
}

float Student::GetSumScore()
{
    cout << "��ʼGetSumScore��" << endl;
    float sumScore = 0;
    for(int i = 0; i < scoreCount - 1; i++)
    {
        sumScore += scores[i];
    }
    cout << "�ܷ��ǣ�" << sumScore << endl;
    return sumScore;
}

Student::Student(string name, string desc) : m_Name(name), m_desc(desc)
{
//    m_Name = name;//�ȼ�д����    SetName(name);
//    SetDesc(desc);
    cout << "���ô��ι���Student(string name, string desc)��" << name << "\t" << desc << endl;
}

Student::~Student()
{
    cout << m_Name << "���ͷ�" << endl;
    delete this->scores;
}

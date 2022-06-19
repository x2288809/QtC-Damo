#include "landowner.h"
#include <iostream>
#include <list>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <algorithm>

LandOwner::LandOwner()
{
    SetNickName("Ĭ�ϵ���");
    SetSex("����");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner()" << endl;
    InitCards();
}
LandOwner::LandOwner(string nickName): m_NickName(nickName)
{
    SetSex("����");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner(string nickName)" << endl;
    InitCards();
    // ����isContains

}

LandOwner::LandOwner(string nickName, string sex, int Gold, long exp): m_NickName(nickName), m_Sex(sex), m_Gold(Gold), m_Exp(exp)
{
    cout << "LandOwner(string nickName, string sex, int Gold, long exp)" << endl;
    InitCards();
}

void LandOwner::ShowInfo()
{
    cout << "�ǳƣ�" << GetNickName() << endl;
    cout << "�Ա�" << GetSex() << endl;
    cout << "��ң�" << GetGold() << endl;
    cout << "���飺" << GetExp() << endl;
}

void LandOwner::InitCards()
{
    //����Ĭ�ϵ�һ���˿���
    for(int i = 0; i < 54; i++)
    {
        packCards.push_back(i + 1);
        surplusCards.push_back(packCards.at(i));
    }
    currCards.clear();
//    ShowCards(packCards);
}

void LandOwner::ShowCards(const vector<int>& cards)
{
    //C���Ե�ϰ��
//    for(int i = 0; i < cards.size(); i++)
//    {
//        cout << cards[i] << "��";
//    }
//    cout << endl;
    //C++��ϰ�ߣ�ʹ�õ�����
    /*for(vector<int>::const_iterator iter = cards.begin();iter != cards.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
    */
    /* ʹ��C++ 11�������ƶ� */
//    for(auto iter = cards.begin();iter != cards.end(); iter++)
//        {
//            cout << *iter << ",";
//        }
//        cout << endl;
    /* for������� - C++ 11 */
    for(auto card : cards)
    {
        cout << card << ":" << getColor(card) << " " << getValue(card) << "\t";
    }
    cout << endl;
    //ʹ���㷨�ķ�ʽ�������������ݸ��Ƶ�cout�󶨵ĵ�������
    //#include <iterator>   #include <algorithm>
//    copy(cards.cbegin(), cards.cend(), ostream_iterator<int>(cout, ","));
//    cout << endl;
}

//���ƣ��������һ��ʣ���Ƽ������е��ƣ���ӵ�currCards�����У���surplusCards��ɾ��������
void LandOwner::TouchCard(int cardCout)
{
    srand(time(NULL));
    for(int i = 0; i < cardCout; i++)
    {
        int randIndex = rand() % 54;    //0-53֮��������
        //�жϣ�������ɵ��������ͷ���ʣ���Ƶļ�����
        if(isContains(packCards[randIndex]))
        {
            currCards.push_back(packCards[randIndex]);  //�������Ʒ��뵱ǰ��������
            //��ʣ���Ƽ�����ɾ��������
            deleteCard(surplusCards, packCards[randIndex]);

        }else{
            i--;//��������
        }

    }


    cout << "<��������> - ��ǰ�������£�" << endl;
    ShowCards(currCards);

    cout << "<�������ƺ�> - ʣ���������£�" << endl;
    ShowCards(surplusCards);
}

bool LandOwner::isContains(int cardNum)
{
    //�㷨����
    vector<int>::iterator iter = find(surplusCards.begin(), surplusCards.end(), cardNum);
//    if(iter == surplusCards.end())
//    {
//        return false;
//    }else
//        return true;
    //��д
    return iter != surplusCards.end();

    //��ͨ���ҷ�ʽ
//    for(int i = 0; i < surplusCards.size(); i++)
//    {
//        if(surplusCards[i] == cardNum)
//        {
//            return true;
//        }
//    }
}

void LandOwner::deleteCard(vector<int> & cardVec, int card)
{
    /*
    for(auto iter = cardVec.begin();iter != cardVec.end();)
    {
        if(*iter == card)
        {
            iter = cardVec.erase(card);
        }else{
            ++iter;
        }
    }*/
    //ʹ���㷨ɾ��
    auto iter = find(cardVec.begin(), cardVec.end(), card);
    if(iter != cardVec.end())
    {
        cardVec.erase(iter);
    }
}

//��������
string LandOwner::GetNickName(){
    return m_NickName;
}
//��������
void LandOwner::SetNickName(string val)
{
    m_NickName = val;
}

string LandOwner::GetSex()
{
    return m_Sex;
}
void LandOwner::SetSex(string val)
{
    if(val != "��" || val != "Ů")
    {
        val = "����";
    }else
    m_Sex = val;
}

int LandOwner::GetGold()
{
    return m_Gold;
}
void LandOwner::SetGold(int val)
{
    m_Gold = val;
}

long LandOwner::GetExp()
{
    return m_Exp;
}
void LandOwner::SetExp(long val)
{
    if(val < 0)
    {
        val = 0;
    }else
        m_Exp = val;
}

string LandOwner::getColor(int card)//card����ɫ�������±�
{
    if(card == 53) return "С��";
    if(card == 54) return "����";
    string colors[] = {
        "����", "����", "����", "÷��"
    };
    return colors[(card - 1) / 13];
}

string LandOwner::getValue(int card)
{
    if(card < 0 || card > 54)
        return "erro";
    if(card == 53) return "Black Joker";
    if(card == 54) return "Red Joker";
    string values[] = {
        "A", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"
    };

    return values[(card - 1) / 13];
}

LandOwner::~LandOwner()
{
    cout << GetNickName() << " ���ͷ�!!" << endl;
}




















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
    SetNickName("默认地主");
    SetSex("保密");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner()" << endl;
    InitCards();
}
LandOwner::LandOwner(string nickName): m_NickName(nickName)
{
    SetSex("保密");
    SetExp(0);
    SetGold(1000);
    cout << "LandOwner(string nickName)" << endl;
    InitCards();
    // 测试isContains

}

LandOwner::LandOwner(string nickName, string sex, int Gold, long exp): m_NickName(nickName), m_Sex(sex), m_Gold(Gold), m_Exp(exp)
{
    cout << "LandOwner(string nickName, string sex, int Gold, long exp)" << endl;
    InitCards();
}

void LandOwner::ShowInfo()
{
    cout << "昵称：" << GetNickName() << endl;
    cout << "性别：" << GetSex() << endl;
    cout << "金币：" << GetGold() << endl;
    cout << "经验：" << GetExp() << endl;
}

void LandOwner::InitCards()
{
    //生成默认的一副扑克牌
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
    //C语言的习惯
//    for(int i = 0; i < cards.size(); i++)
//    {
//        cout << cards[i] << "，";
//    }
//    cout << endl;
    //C++的习惯：使用迭代器
    /*for(vector<int>::const_iterator iter = cards.begin();iter != cards.end(); iter++)
    {
        cout << *iter << ",";
    }
    cout << endl;
    */
    /* 使用C++ 11的类型推断 */
//    for(auto iter = cards.begin();iter != cards.end(); iter++)
//        {
//            cout << *iter << ",";
//        }
//        cout << endl;
    /* for区间遍历 - C++ 11 */
    for(auto card : cards)
    {
        cout << card << ":" << getColor(card) << " " << getValue(card) << "\t";
    }
    cout << endl;
    //使用算法的方式，将容器的内容复制到cout绑定的迭代器中
    //#include <iterator>   #include <algorithm>
//    copy(cards.cbegin(), cards.cend(), ostream_iterator<int>(cout, ","));
//    cout << endl;
}

//摸牌：随机生成一张剩余牌集合中有的牌，添加到currCards集合中，从surplusCards中删除这张牌
void LandOwner::TouchCard(int cardCout)
{
    srand(time(NULL));
    for(int i = 0; i < cardCout; i++)
    {
        int randIndex = rand() % 54;    //0-53之间的随机数
        //判断：随机生成的这张牌释放在剩余牌的集合中
        if(isContains(packCards[randIndex]))
        {
            currCards.push_back(packCards[randIndex]);  //将摸的牌放入当前手牌数组
            //在剩余牌集合中删除这张牌
            deleteCard(surplusCards, packCards[randIndex]);

        }else{
            i--;//重新摸牌
        }

    }


    cout << "<地主摸牌> - 当前手牌如下：" << endl;
    ShowCards(currCards);

    cout << "<地主摸牌后> - 剩余牌面如下：" << endl;
    ShowCards(surplusCards);
}

bool LandOwner::isContains(int cardNum)
{
    //算法查找
    vector<int>::iterator iter = find(surplusCards.begin(), surplusCards.end(), cardNum);
//    if(iter == surplusCards.end())
//    {
//        return false;
//    }else
//        return true;
    //缩写
    return iter != surplusCards.end();

    //普通查找方式
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
    //使用算法删除
    auto iter = find(cardVec.begin(), cardVec.end(), card);
    if(iter != cardVec.end())
    {
        cardVec.erase(iter);
    }
}

//返回名称
string LandOwner::GetNickName(){
    return m_NickName;
}
//传入名称
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
    if(val != "男" || val != "女")
    {
        val = "保密";
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

string LandOwner::getColor(int card)//card是牌色，不是下标
{
    if(card == 53) return "小王";
    if(card == 54) return "大王";
    string colors[] = {
        "黑桃", "红心", "方块", "梅花"
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
    cout << GetNickName() << " 被释放!!" << endl;
}




















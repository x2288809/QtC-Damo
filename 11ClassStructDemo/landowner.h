#ifndef LANDOWNER_H
#define LANDOWNER_H
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <algorithm>

using namespace std;


class LandOwner
{
    /** 地主名称 */
    string m_NickName;
    /** 性别 */
    string m_Sex;
    /** 持有金币 */
    int m_Gold;
    /** 经验 */
    long m_Exp;
    /** 原始牌：默认一副牌54张  */
    vector<int> packCards;      //默认的一副牌，从1-54 , 原始牌
    /** 牌堆：摸牌后剩余的牌 */
    vector<int> surplusCards;   //摸牌后剩余的牌
    /** 当前玩家的手牌数 */
    vector<int> currCards;       //当前玩家的手牌数组
    /** 牌堆中即将释放的牌 */
    bool isContains(int);       //剩余牌集合中释放包含cardNum这个牌面
    void deleteCard(vector<int>&, int); //删除集合中的数字
    /** 牌的花色 */
    string getColor(int);
    /** 牌面 */
    string getValue(int);

public:
    LandOwner();
    ~LandOwner();
    LandOwner(string);
    LandOwner(string, string, int, long);

    string GetNickName();
    void SetNickName(string);
    string GetSex();
    void SetSex(string);
    int GetGold();
    void SetGold(int);
    long GetExp();
    void SetExp(long);

    void TouchCard(int);    //摸牌
    void ShowInfo();
    void InitCards();       //初始化 packCards，surplusCards,currCards
    void ShowCards(const vector<int>&);       //显示集合中的牌面

};

#endif // LANDOWNER_H

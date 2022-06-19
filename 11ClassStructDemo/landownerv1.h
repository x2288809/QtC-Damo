#ifndef LANDOWNERV1_H
#define LANDOWNERV1_H
#include <iostream>

using namespace std;
/*
 *  .h文件一般包含实现的内联函数，通常用于模板类这种声明与实现共存的情况
 *  建议：只要不是纯模板，一律使用 .h作为头文件后缀，使用.cpp文件作为函数的实现
 **/

class LandOwnerV1
{

public://修饰的成员在任意蒂法都可以访问

    string name;    /** 地主名称 */
    long score;     /** 地主积分 */
    int cards[20];  /** 地主手牌数组 */

public:

    LandOwnerV1();  //构造函数的声明
//    ~LandOwnerV1(); //析构函数的声明

    void TouchCard(int);//声明摸牌方法
    void showScore();   //声明的显示积分方法

private://修饰的成员只能在类中或者友元函数中可以访问

};

#endif // LANDOWNERV1_H

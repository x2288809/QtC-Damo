#ifndef LANDOWNERV3_H
#define LANDOWNERV3_H
#include <iostream>

using namespace std;


class landOwnerV3
{
    //省略了private
    long _score; //解决积分被赋值为负数错误的方法：将成员遍历score进行隐藏并封装
    string _name;
    int cards[20];
public:

    landOwnerV3();
    void showScore();
    string getName(string name)
    {
        _name = name;
        return _name;
    }
    //使用方法/函数实现对成员变量的封装Get/Set方法
    void SetScore(long);

};

#endif // LANDOWNERV3_H

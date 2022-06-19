#ifndef GZDEMO_H
#define GZDEMO_H
//使用函数升级《小公举养成记》中的基本属性录入及排序功能
//基本属性：体力、智力、魅力、道德、气质
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

//函数定义
/** 输入公举的各项属性值 */
void input(int [], int);
/** 输出公举的各项属性值 */
void print(const int *, int);
/** 删除一个公举的属性 */
void delGirlBaseinfo(string);
/** 简单的求和 */
int sum(int, int);

string valueNames[] = {"体力", "智力", "魅力", "道德", "气质"};

//函数实现
void input(int values[], int len)
{
    if(len > 5)
    {
        cout << "数组长度只能是5以内！！！" << endl;
        return;//退出返回值为void的函数
    }
    for(int i = 0;i < len;i++)
    {
        cout << valueNames[i] << "：" ;
        cin >> values[i];
    }
}

void print(const int * values, int len)
{
    for(int i = 0;i < len;i++)
    {
        cout << valueNames[i] << "：" << values[i] << endl;
    }
}

/*
void delGirlBaseinfo(string valueNamesTemp)
{
    for(int i = 0; i < sizeof (valueNames) / sizeof(string);i++){
        if(valueNamesTemp != valueNames[i]){
            cout << "不存在该属性值！！！" << endl;
            return;
        }
    }
    valueNames.erase(valueNamesTemp);
}
*/

int sum(int num1,int num2){
    int result = num1 + num2;
    return result;
}

#endif // GZDEMO_H

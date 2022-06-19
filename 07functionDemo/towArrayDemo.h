#ifndef TOWARRAYDEMO_H
#define TOWARRAYDEMO_H
#include <iostream>

using namespace std;
//声明
void show(double (*)[5], int);

//实现
void show(double (*arrs)[5], int len)
{
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << arrs[i][j] << "\t";
        }
        cout << endl;
    }
}



#endif // TOWARRAYDEMO_H

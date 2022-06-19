#ifndef SORTING_H
#define SORTING_H
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>//控制输出格式

using namespace std;

template <typename T> void sort(T tArray[], int len);
template <typename T> void show(T tArray[], int len);

template <typename T> void sort(T tArray[], int len)
{
    T temp;
    for(int i = 0;i < len; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(tArray[j] > tArray[j + 1])
            {
                temp = tArray[j];
                tArray[j] = tArray[j + 1];
                tArray[j + 1] = temp;
            }

        }
    }
}

template <typename T> void show(T tArray[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << "\t" << tArray[i] << "\t";
    }
    cout << endl;
}

#endif // SORTING_H

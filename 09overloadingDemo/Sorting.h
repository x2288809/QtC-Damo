#ifndef SORTING_H
#define SORTING_H
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>//控制输出格式

using namespace std;

//函数重载
void sort(int[], int);
void sort(float[], int);
void sort(double[], int);
void show(int[], int);
void show(float[], int);
void show(double[], int);


void show(int nums[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;
}
void show(float nums[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;
}
void show(double nums[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;
}

void sort(int nums[], int len)
{
    int temp;
    for(int i = 0;i < len; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }

        }
    }
}

void sort(float nums[], int len)
{
    float temp;
    for(int i = 0;i < len; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

void sort(double nums[], int len)
{
    double temp;
    for(int i = 0;i < len; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
#endif // SORTING_H

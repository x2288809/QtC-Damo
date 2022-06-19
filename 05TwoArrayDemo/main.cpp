#include <QCoreApplication>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <vector>
#include <algorithm>//算法头文件

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //向量容器 vector<double> vec1;

    vector<double> vecDouble = {98.5, 45.6, 67.4, 76.3};

    //遍历方式1
    cout << "数组：";
    for(int i = 0; i < vecDouble.size(); i++){
        cout << vecDouble[i] << "\t";
    }
    cout << endl;

    //向数组中插入数字
    vecDouble.push_back(100.8);
    cout << "插入数字：100.8\n";
    //遍历方式2，集合的通用遍历方式：使用迭代器 iterator
    //一下是迭代器的基本用法
    vector<double>::iterator it;//得到迭代器对象
    //it.begin 从第一个元素开始迭代
    cout << "插入数字后的数组：";
    for(it = vecDouble.begin();it != vecDouble.end(); ++it){//用it++也可以，但是++it可以更好的使用机器的缓存性能
        cout << *it << "\t";
    }
    cout << endl;

    //sort()按照从小到大排序
    sort(vecDouble.begin(),vecDouble.end());
    cout << "排序后的数组：";
    for(it = vecDouble.begin();it != vecDouble.end(); ++it){
        cout << *it << "\t";
    }
    cout << endl;

    //reverse逆序排序
    reverse(vecDouble.begin(),vecDouble.end());
    cout << "逆序后的数组：";
    for(it = vecDouble.begin();it != vecDouble.end(); ++it){
        cout <<  *it << "\t";
    }

    /*
    //使用二维数组
    string stuNames[] {"刘备", "关羽", "张飞"};
    string courseNames[] {"语文", "数学", "英语"};
    const int ROW = 3;
    const int COL = 3;
    double scores[ROW][COL];
    for(int i = 0; i < ROW;i++){
        for(int j = 0; j < COL;j++){
            cout << stuNames[i] << "的" << courseNames[j] << "的成绩：";
            cin >> scores[i][j];
        }
    }

    //打印结果
    cout << "\t";
    for(int i = 0; i < COL; i++){
        cout << courseNames[i] << "\t";
    }
    cout << endl;
    for(int i = 0; i < ROW; i++){
        cout << stuNames[i] << "\t";
        for(int j = 0; j < COL; j++){
            cout << scores[i][j] << "\t";
        }
        cout << endl;
    }
    */

    return a.exec();
}

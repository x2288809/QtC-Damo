#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //感受双循环
    //打印星号*图形
    //外层循环控制行（行数，换行）
    //内层循环控制列（列数，列的图形）
    //打印菱形
    //1.打印上三角形
    for(int i = 0; i< 4;i++){
        for(int j = 0;j <= 2 - i;j++){

            cout << " ";
        }
        for(int j = 0;j <= 2 * i;j++){

            cout << (char)('A'+i);
//            cout << "*";
        }
        cout << endl;
    }
    //2.打印下三角形
    for(int i = 0; i< 4;i++){
        for(int j = 0;j <= i;j++){

            cout << " ";
        }
        for(int j = 0;j <= 4 - 2 * i;j++){
            cout << (char)('C'- i);
//            cout << "*";
        }
        cout << endl;
    }

    //打印空心三角形
    //1.打印上三角形
    for(int i = 0; i< 4;i++){
        for(int j = 0;j <= 2 - i;j++){

            cout << " ";
        }
        for(int j = 0;j <= 2 * i;j++){
            //极值就是循环的条件
            if(j == 0 || j == 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    //2.打印下三角形
    for(int i = 0; i< 4;i++){
        for(int j = 0;j <= i;j++){

            cout << " ";
        }
        for(int j = 0;j <= 4 - 2 * i;j++){
            //在j是极值的情况下打印星号，否则打印空格
            if(j == 0 || j == 4 - 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }



    /*
    //求1-100之间的偶数和
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        //跳过奇数
        if(i % 2 == 1)
            continue;
        sum += i;
        cout << "当前偶数:" << i << "\t当前偶数和:" << sum << endl;
    }
    cout << "\n1-100之间的偶数和:" << sum << endl;
     */


    /*
    //循环输入5个玩家的消费，统计消费额低于500的玩家数量
    double money;
    int playerCount = 0;
    for(int i =0; i < 5; i++){
        cout << "请输入当前玩家的消费额：";
        cin >> money;
        //跳过500以上的情况
        if(money >= 500)
            continue;
        playerCount++;
    }
    cout << "消费低于500的玩家有 " << playerCount << " 个" << endl;
    */

    /*
    //猜数字游戏
    //随机的商品价格
    int price;
    //随机数
    srand(time(NULL));
    price = (rand() % 1000) + (rand() % 101)/10;
    cout << price << endl;
    //用户猜测的次数
    int guessPrice = 0;
    int guessCount = 0;
    while (1) {
        guessCount++;
        cout << "第 " << guessCount << " 次猜测，请输入神秘商品的价格：";
        cin >> guessPrice;
        if(guessPrice > price){
            cout << "猜大了！！" << endl;
        }
        else if(guessPrice < price){
            cout << "猜小了！！" << endl;
        }else if(guessPrice == price){
            cout << "恭喜您猜对啦！！！" << endl;
            break;
        }

    }
    if(guessCount == 1){
        cout << "1次就中，一定是幸运女神眷顾你，中了特等奖：iPhone20 plus plus 土豪金 1T" << endl;
    }else if(guessCount > 1 && guessCount <= 3){
        cout << "幸运狂人，中了一等奖：iPhone20 土豪金 256G" << endl;
    }else if(guessCount > 3 && guessCount <= 5){
        cout << "牛逼，中了二等奖：iPhone20 128G" << endl;
    }else{
        cout << "猜了 " << guessCount << " 次，才猜中，给你个拥抱吧！！" << endl;
    }
    */

    /*
    //使用循环打印1997年7月的月历
    //已知：1997年7月1日是星期二，香港回归举国同庆
    //1.定义变量
    int day = 31;
    int dayOfWeek = 2;  //7月第一天是周二，月份1日的星期
    cout << "1997年7月" << endl;
    cout << "一\t二\t三\t四\t五\t六\t日" << endl;
    for(int i = 0;i < dayOfWeek - 1;i++){
        cout << '\t';
    }
    //2.书写循环
    //3.书写循环体及循环体内的条件
    for(int i = 0;i < day; i++){
        cout << i +1;
        if((dayOfWeek +i) % 7 == 0){
            cout << '\n';
        }else{
            cout << '\t';
        }
    }
    */

    /*
    //计算平均工资
    //1.定义变量 2.根据条件书写循环 3.书写循环内容
    double salary = 0;      //工资
    double sumSalary = 0;   //总工资
    double avgSalary = 0;   //平均工资
    const int YEAR = 6;
    for(int i = 0;i < YEAR; i++){
        cout << "请输入第 " << i + 1 << "月的工资：";
        cin >> salary;
        //累加
        sumSalary += salary;
    }
    avgSalary = sumSalary / YEAR;
    cout << "半年的平均工资为：" << avgSalary << endl;
    */
    return a.exec();
}

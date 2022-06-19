#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //使用循环模拟拳皇对战

    int hp1 = 100;//八神庵HP
    int hp2 = 100;//草稚京HP

    int attack1 = 0; //八神庵的攻击力
    int attack2 = 0; //草稚京的攻击力
    int randNum;    //用来存放玩家攻击先后的随机数变量
    int i = 1;      //回合数

    srand(time(NULL));

    cout << "草稚京HP：" << hp2 << endl;
    cout << "八神庵HP：" << hp1 << endl;

    while(hp1 > 0 && hp2 > 0){
        //1.模拟玩家出招：可以采用随机数是奇数/偶数的方式来决定谁先进行攻击
        //奇数 - 八神庵先攻击，偶数草稚京先
        cout << endl;
        cout << "第 " << i << " 回合" << endl;
        randNum = rand();
        if (randNum % 2 == 1){//奇数
            cout << "八神庵优先发起攻击" << endl;
            //rand()为随机获取0-1之间的随机数
            attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            hp2 -= attack1;
            cout << "草稚京遭受到 " << attack1 << " 伤害" << endl;
            //假如草稚京未死，则八神庵会继续受到伤害
            if(hp2 > 0){
                hp1 -= attack2;
                cout << "草稚京奋起反击" << endl;
                cout << "八神庵遭受到 " << attack2 << " 伤害" << endl;
            }
        }
        else{//偶数
            cout << "草稚京优先发起攻击" << endl;
            attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            hp1 -= attack2;
            cout << "八神庵遭受到 " << attack2 << " 伤害" << endl;
            //假如八神庵未死，则草稚京会继续受到伤害
            if(hp1 > 0){
                hp2 -= attack1;
                cout << "八神庵奋起反击" << endl;
                cout << "草稚京遭受到 " << attack1 << " 伤害" << endl;
            }
        }
        //打印对战结果
        cout << endl;
        cout << "草稚京HP：" << hp2 << endl;
        cout << "八神庵HP：" << hp1 << endl;
        i++;
    }
    if(hp1 <= 0){
        cout << "\n八神庵已死亡" << endl;
        cout << "草稚京获得胜利" << endl;
    }
    if(hp2 <= 0){

        cout << "\n草稚京已死亡" << endl;
        cout << "八神庵获得胜利" << endl;
    }


    /*
    int i = 1;
    while (i <= 10) {
        cout << "小人本住在苏州的城边...\t第" << i << "遍\n";
        i++;
    }
    */

    /*
    double money = 800.0;
    int year = 2015;
    while (money <= 2000) {
        year++;
        money = money * (1+ 0.25);
        cout << "到" << year << "年，营业额达到" << money << "亿！" << endl;
    }
    cout << "到" << year << "年，营业额超过2000亿" << endl;
    */

    /*
    int n = 0;
    while(n++ <= 2);//while(n <= 2) n++;
    cout << n;
    */


    /*
    int k =1, n = 10, m = 1;
    while(k <= n)
    {
        m *= 2;
        n--;
        cout << "m = " << m << "\t\t";
        if(n != 0)
        cout << "n = " << n << endl;
    }
    */

    /*
    int num = 1;
    int sum = 0;
    while(num <= 100){
        sum = num + sum;
        cout << "sum = " << sum << "\t\t"
             << "num = " << num << endl;
        num++;
    }

    cin.get();

    */

    return 0;

//    return a.exec();
}

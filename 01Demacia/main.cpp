#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    float numFloat = 10 / 3.0;
//    double numDouble = 10 / 3.0;
//    cout << fixed;//让浮点型固定以书资的方式显示
//    cout << setprecision(2);//控制显示的小数位数
//    cout << "numFloat:" << numFloat * 10000 << endl;
//    cout << "numDouble:" << numDouble * 10000 << endl;

    cout << fixed << setprecision(2) << endl;
    string heroName = "德玛西亚之力·盖伦";
    //伤害
    double heroHurt = 57.88;
    double heroHurtRange = 4.50;
    //攻击距离
    int heroHertLength = 172;
    //护甲，物理防御
    double heroPhysicalDefense = 27.54;
    double heroPhysicalDefenseRange = 3.00;
    //魔抗，魔力防御
    double heroMagicDefense = 32.10;
    double heroMagicDefenseRange = 1.25;
    //生命值
    double heroHealth = 616.28;
    double heroHealthRange = 84.25;
    //生命回复
    double heroHealthRecovery = 7.84;
    double heroHealthRecoveryRange = 0.50;
    //法力值
    double heroMana = 0.00;
    double heroManaRange = 0.00;
    //法力回复
    double heroManaRecovery = 0.00;
    double heroManaRecoveryRange = 0.00;
    //移速
    int heroMovementSpeed = 340;
    //定位
    string heroOrientation = "上单 辅助 打野";
    //点券
    long userTickets = 450;
    //金币
    long userGold = 10000;

    cout << "姓名：" << heroName << endl;
    cout << "伤害：" << heroHurt << "(+" << heroHurtRange << ")\t"
         << "攻击距离：" << heroHertLength << endl;
    cout << "护甲：" << heroPhysicalDefense << "(+" << heroPhysicalDefenseRange << ")\t"
         << "魔抗：" << heroMagicDefense << "(+" << heroMagicDefenseRange << ")" << endl;
    cout << "生命：" << heroHealth << "(+" << heroHealthRange << ")\t"
         << "生命回复：" << heroHealthRecovery << "(+" << heroHealthRecoveryRange << ")" << endl;
    cout << "法力值：" << heroMana << "(+" << heroManaRange << ")\t"
         << "法力回复：" << heroManaRecovery << "(+" << heroManaRecoveryRange << ")" << endl;
    cout << "移速：" << heroMovementSpeed << "\t\t"
         << "定位：" << heroOrientation << endl;
    cout << "点券：" << userTickets << "\t\t"
         << "金币：" << userGold << endl;


    cout << "CHAR：" << CHAR_MIN << " ~ " << CHAR_MAX << endl;

    cout << "UCHAR_MAX：" << UCHAR_MAX << endl;


    cin.get();

    return 0;
    //return a.exec();
}

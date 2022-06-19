#include <QCoreApplication>
#include <iostream>
#include <iomanip>//控制输出格式
#include <ctime>
#include <cmath>
#include <array>
#include <vector>//集合
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /** 父亲的名字 */
    string fatherName;
    /** 女儿的名字 */
    string girlName;
    /** 女儿的出生月份 */
    int girlBirthMonth = 0;
    /** 女儿的出生日 */
    int girlBirthDate = 0;
    /** 初始金币 */
    int userGold = 500;
    /** 女孩的年龄 */
    int girlAge = 11;
    /** 女孩的五项基本信息： 体质、智力、魅力、道德、气质 */
    array<int,5> girlBaseinfo;//动态分配内存的数组
    /** 女孩五项基本信息的名称： 体质、智力、魅力、道德、气质 */
    array<string,5> girlBaseinfoName = {"体质", "智力", "魅力", "道德", "气质"};//动态分配内存的数组
    /** 女孩的星座 */
    string girlConstell;
    /** 星座的二维数组 */
    string constellNames[12][2] = {
        {"摩羯座","水瓶座"},//一月
        {"水瓶座","双鱼座"},//二月
        {"双鱼座","白羊座"},//三月
        {"白羊座","金牛座"},//四月
        {"金牛座","双子座"},//五月
        {"双子座","巨蟹座"},//六月
        {"巨蟹座","狮子座"},//七月
        {"狮子座","处女座"},//八月
        {"处女座","天枰座"},//九月
        {"天枰座","天蝎座"},//十月
        {"天蝎座","射手座"},//十一月
        {"射手座","摩羯座"}//十二月
    };
    /** 各星座的跨星座日期 */
    int constellDates[]{20, 19, 21, 20 ,21 ,22, 23, 23, 23, 24, 23, 22};



    cout << "请输入父亲的名字：";
    cin >> fatherName;
    cout << "请输入女儿的名字：";
    cin >> girlName;
    cout << "女儿的出生月份是：";
    while(1){
        cin >> girlBirthMonth;
        if(girlBirthMonth >= 1 && girlBirthMonth <= 12){
            break;
        }else{
            cout << "输入的月份有误，请重新输入：";
            continue;
        }
    }
    cout << "女儿的出生日是：";
    while(1){
        cin >> girlBirthDate;
        if(girlBirthMonth == 1 || girlBirthMonth == 3 || girlBirthMonth == 5 || girlBirthMonth == 7 ||girlBirthMonth == 8 || girlBirthMonth == 10 || girlBirthMonth == 12){
            if(girlBirthDate >= 1 && girlBirthDate <= 31){
                break;
            }else{
                cout << "输入的日期有误，请重新输入：";
                continue;
            }
        }else if(girlBirthMonth == 2){
            if(girlBirthDate >= 1 && girlBirthDate <= 29){
                break;
            }else{
                cout << "输入的日期有误，请重新输入：";
                continue;
            };
        }else{
            if(girlBirthDate >= 1 && girlBirthDate <= 30){
                break;
            }else{
                cout << "输入的日期有误，请重新输入：";
                continue;
            };
        }
    }
    //获取女儿的星座
    girlConstell = constellNames[girlBirthMonth - 1][girlBirthDate / constellDates[girlBirthMonth - 1]];
    if(girlConstell == "白羊座"){
        girlBaseinfo[0] = 80;   //体质
        girlBaseinfo[1] = 15;   //智力
        girlBaseinfo[2] = 15;   //魅力
        girlBaseinfo[3] = 11;   //道德
        girlBaseinfo[4] = 21;   //气质
    }else if(girlConstell == "金牛座"){
        girlBaseinfo[0] = 46;   //体质
        girlBaseinfo[1] = 30;   //智力
        girlBaseinfo[2] = 28;   //魅力
        girlBaseinfo[3] = 20;   //道德
        girlBaseinfo[4] = 29;   //气质
    }else if(girlConstell == "双子座"){
        girlBaseinfo[0] = 50;   //体质
        girlBaseinfo[1] = 35;   //智力
        girlBaseinfo[2] = 23;   //魅力
        girlBaseinfo[3] = 8;   //道德
        girlBaseinfo[4] = 20;   //气质
    }else if(girlConstell == "巨蟹座"){
        girlBaseinfo[0] = 40;   //体质
        girlBaseinfo[1] = 31;   //智力
        girlBaseinfo[2] = 33;   //魅力
        girlBaseinfo[3] = 17;   //道德
        girlBaseinfo[4] = 33;   //气质
    }else if(girlConstell == "狮子座"){
        girlBaseinfo[0] = 85;   //体质
        girlBaseinfo[1] = 9;   //智力
        girlBaseinfo[2] = 11;   //魅力
        girlBaseinfo[3] = 20;   //道德
        girlBaseinfo[4] = 37;   //气质
    }else if(girlConstell == "处女座"){
        girlBaseinfo[0] = 35;   //体质
        girlBaseinfo[1] = 28;   //智力
        girlBaseinfo[2] = 36;   //魅力
        girlBaseinfo[3] = 18;   //道德
        girlBaseinfo[4] = 40;   //气质
    }else if(girlConstell == "天枰座"){
        girlBaseinfo[0] = 42;   //体质
        girlBaseinfo[1] = 33;   //智力
        girlBaseinfo[2] = 25;   //魅力
        girlBaseinfo[3] = 32;   //道德
        girlBaseinfo[4] = 28;   //气质
    }else if(girlConstell == "天蝎座"){
        girlBaseinfo[0] = 50;   //体质
        girlBaseinfo[1] = 25;   //智力
        girlBaseinfo[2] = 40;   //魅力
        girlBaseinfo[3] = 18;   //道德
        girlBaseinfo[4] = 17;   //气质
    }else if(girlConstell == "射手座"){
        girlBaseinfo[0] = 57;   //体质
        girlBaseinfo[1] = 31;   //智力
        girlBaseinfo[2] = 15;   //魅力
        girlBaseinfo[3] = 19;   //道德
        girlBaseinfo[4] = 20;   //气质
    }else if(girlConstell == "摩羯座"){
        girlBaseinfo[0] = 56;   //体质
        girlBaseinfo[1] = 21;   //智力
        girlBaseinfo[2] = 16;   //魅力
        girlBaseinfo[3] = 25;   //道德
        girlBaseinfo[4] = 23;   //气质
    }else if(girlConstell == "水瓶座"){
        girlBaseinfo[0] = 43;   //体质
        girlBaseinfo[1] = 43;   //智力
        girlBaseinfo[2] = 20;   //魅力
        girlBaseinfo[3] = 23;   //道德
        girlBaseinfo[4] = 17;   //气质
    }else if(girlConstell == "双鱼座"){
        girlBaseinfo[0] = 41;   //体质
        girlBaseinfo[1] = 20;   //智力
        girlBaseinfo[2] = 29;   //魅力
        girlBaseinfo[3] = 23;   //道德
        girlBaseinfo[4] = 32;   //气质
    }
    cout << "公元1659年，勇者" << fatherName << "收养了小女孩" << girlName << endl;

    cout << girlName << "的详细信息如下：" << endl;
    cout << "姓名：" << girlName << endl;
    cout << "生日：1648-" << girlBirthMonth << "-" << girlBirthDate << endl;
    cout << "星座：" << girlConstell << endl;
    cout << "年龄：" << girlAge << endl;
    cout << "金钱：" << userGold << endl;

    cout << "\n**********游戏开始**********" << endl;

    for(int year = 1659; year <= 1659 + 7; year++){
        for(int month = (year == 1659) ? 6 : 1; month <= 12; month++){
            //判断本月是否是女儿的生日
            if(month == girlBirthMonth){
                cout << "本月" << girlBirthDate << "日是" << girlName << "的生日，要不要送礼物？(请输入Y/N或者1/0):";
                //用户的选择
                string userChoiceString;
                while (1) {
                    cin >> userChoiceString;
                    //根据用户的输入进行判断
                    if(userChoiceString == "Y" || userChoiceString == "y" || userChoiceString == "1")
                    {
                        cout << girlName << "收到了一份精美的礼物！" << endl;
                        break;
                    }else if(userChoiceString == "N" || userChoiceString == "n" || userChoiceString == "0"){
                        cout << girlName << "因为你没有准备生日礼物，有些沮丧！";
                        break;
                    }else{
                        cout << "输入的信息有误，请重新选择(输入Y/N或者1/0):";
                        continue;
                    }
                }
            }
            //显示游戏主菜单
            cout << "\n**********游戏菜单**********\n\n";
            cout << "\n1.查看状态\n2.安排行程\n3.亲子谈话\n4.存档\n5.读档\n请选择您的操作：";
            int choice;
            while (1) {
                cin >> choice;
                if(choice > 0 && choice <= 5)
                {
                    break;
                }else{
                    cout << "输入的值有误，请重新输入：";
                    continue;
                }
            }

            switch (choice) {
            case 1://查看状态
                cout << "\n**********查看状态**********\n\n";
                cout << "女儿的信息：\n";
                cout << "姓名：" << girlName << endl;
                cout << "生日：1648-" << girlBirthMonth << "-" << girlBirthDate << endl;
                cout << "星座：" << girlConstell << endl;
                cout << "年龄：" << girlAge << endl;
                cout << "金钱：" << userGold << endl;
                //打印核心属性
                cout << left;
                for(int i = 0; i < 5; i++)
                {
                    cout << girlBaseinfoName[i] << "：" << setw(3) << girlBaseinfo[i];
                    //打印图形属性值
                    //计算实心方块的数量
                    int solidCount = girlBaseinfo[i] / 10;
                    for(int j = 0; j < 10; j++)
                    {
                        if(j < solidCount)
                            cout << "■";
                        else
                            cout << "□";
                    }
                    cout << endl;
                }
                break;
            case 2:{//安排行程：一个月最多安排三个行程
                cout << "\n**********安排行程**********\n\n";
                string monthParts[] = {"上旬","中旬","下旬"};
                for(int i = 0; i < 3; i++)
                {
                    cout << "-- " << month << "月 -- " << monthParts[i] << endl;
                    cout << "1.学习武艺\n2.上私塾\n3.学习礼法\n4.出城修行\n5.打工赚钱" << endl;
                    cout << "请选择：";
                    cin >> choice;
                    srand(time(NULL));
                    if(choice != 5)
                    {
                        if(userGold <= 0)
                        {
                            cout << "你的钱不够，无法安排此项行程，请重新选择：";
                            i--;
                            continue;
                        }
                    }
                    if(choice == 1){//1.学习武艺：+体质 +魅力 -金钱
                        int temp1 = rand() % 11;
                        int temp2 = rand() % 11;
                        int temp3 = rand() % 51;
                        girlBaseinfo[0] += temp1;
                        girlBaseinfo[1] += temp2;
                        userGold -= temp3;
                        cout << "站如松，坐如钟，行如风！\n体质 +" << temp1
                             << "，魅力 +" << temp2
                             << "，金钱 -" << temp3 << endl;
                    }else if(choice == 2){//2.上私塾：+智力 +气质 -金钱
                        int temp1 = rand() % 11;
                        int temp2 = rand() % 11;
                        int temp3 = rand() % 51;
                        girlBaseinfo[1] += temp1;
                        girlBaseinfo[4] += temp2;
                        userGold -= temp3;
                        cout << "腹有诗书气自华！\n智力 +" << temp1
                             << "，气质 +" << temp2
                             << "，金钱 -" << temp3 << endl;
                    }else if(choice == 3){//3.学习礼法：+气质 +魅力 -金钱
                        int temp1 = rand() % 11;
                        int temp2 = rand() % 11;
                        int temp3 = rand() % 51;
                        girlBaseinfo[4] += temp1;
                        girlBaseinfo[2] += temp2;
                        userGold -= temp3;
                        cout << "君子以仁存心,以礼存心:仁者爱人,有礼者敬人。爱人者人恒爱之,敬人者人恒敬之。\n气质 +" << temp1
                             << "，魅力 +" << temp2
                             << "，金钱 -" << temp3 << endl;
                    }else if(choice == 4){//4.出城修行：+体质 +道德 -金钱
                        int temp1 = rand() % 11;
                        int temp2 = rand() % 11;
                        int temp3 = rand() % 51;
                        girlBaseinfo[0] += temp1;
                        girlBaseinfo[3] += temp2;
                        userGold -= temp3;
                        cout << "读万卷书，不如行万里路！\n体力 +" << temp1
                             << "，道德 +" << temp2
                             << "，金钱 -" << temp3 << endl;
                    }else if(choice == 5){//5.打工赚钱：+金钱
                        int temp1 = girlBaseinfo[0] / rand() % 11;
                        int temp2 = girlBaseinfo[1] / rand() % 11;
                        int temp3 = temp1 + temp2 + rand() % 21;
                        userGold += temp3;
                        cout << "通过努力打工，赚到了 " << temp3 << " 元金钱"
                             << "\n金钱 +" << temp3 << endl;
                        cout << "\n友情提示：体质和智力将影响您打工获得的金钱！！\n" << endl;
                    }
                }
                break;
            }
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                break;
            }
        }
    }

    //根据各项参数，判断游戏结果

    cout << "\n**********游戏评价**********\n\n";

    cout << girlName << "已经成年，进入圣殿接受祈福，神书授予评价：\n\n";

    /** 女孩各项属性的总数值 */
    int sumGirlBaseinfo = 0;
    for(int i = 0; i < 5; i ++)
    {
        sumGirlBaseinfo += girlBaseinfo[i];
    }
    //获取最大值
    /** 女孩所有属性中的最大值 */
    int maxGirlBaseinfo = girlBaseinfo[0];
    /** 女孩所有属性中的最大值所在数组元素的下标 */
    int maxGirlBaseinfoIndex = 0;
    for(int i = 0; i < 5; i++){
        if(maxGirlBaseinfo < girlBaseinfo[i])
        {
            maxGirlBaseinfo = girlBaseinfo[i];
            maxGirlBaseinfoIndex = i;
        }
    }
    if(sumGirlBaseinfo > 2000)
    {
        cout << "风华绝代，冠绝当世！/n/n" << girlName << "登基称帝，成为史上第二任女帝王！！" << endl;
    }
    else if(sumGirlBaseinfo >= 1800 && sumGirlBaseinfo <= 2000)
    {
        if("魅力" == girlBaseinfoName[maxGirlBaseinfoIndex])
        {
            cout << "姿容无双，颠倒众生！/n/n" << girlName << "成为皇后~~" << endl;
        }
        else if("武力" == girlBaseinfoName[maxGirlBaseinfoIndex])
        {
            cout << "巾帼不让须眉，勇者无双！/n/n" << girlName << "成为了女将军~~" << endl;
        }
        else if("智力" == girlBaseinfoName[maxGirlBaseinfoIndex])
        {
            cout << "才华横溢，智计无双！/n/n" << girlName << "成为史上第一女状元~~" << endl;
        }
        else{
            cout << "德才兼备，卓尔不群！/n/n" << girlName << "成为皇家学院总裁~~" << endl;
        }
    }
    else if(sumGirlBaseinfo >= 1600 && sumGirlBaseinfo < 1800)
    {
        cout << "才华卓绝，出类拔萃！/n/n" << girlName << "成为皇家审判团团长~~" << endl;
    }
    else if(sumGirlBaseinfo >= 1200 && sumGirlBaseinfo < 1600)
    {
        //道德最高，其魅力>气质
        if("道德" == girlBaseinfoName[maxGirlBaseinfoIndex] && girlBaseinfo[2] > girlBaseinfo[4])
        {
            cout << "德高望重，不同流俗！！/n/n" << girlName << "成长成为一名光荣的高级祭司！" << endl;
        }
        //气质最高，其智力>体力
        else if("气质" == girlBaseinfoName[maxGirlBaseinfoIndex] && girlBaseinfo[2] > girlBaseinfo[0])
        {
            cout << "仪静体闲,柔情绰态!!/n/n" << girlName << "被封为文怡郡主！" << endl;
        }//魅力最高，其气质>体力
        else if("魅力" == girlBaseinfoName[maxGirlBaseinfoIndex] && girlBaseinfo[4] > girlBaseinfo[0])
        {
            cout << "国色天香,美如冠玉!!/n/n" << girlName << "成为燕王王妃！" << endl;
        }
        else{
            cout << "怀瑾握瑜，高情远致!!/n/n" << girlName << "成长成为一代女国师！" << endl;
        }
    }
    else{
        int endChoise = rand() % 2;
        switch (endChoise) {
        case 0:
            cout << "路漫漫其修远兮!!/n/n" << girlName << "成为一名坤道！" << endl;
            break;
        case 1:
            cout << "超尘拔俗，架海擎天!!/n/n多年后" << girlName << "成为一名坤道，并修行至元婴境界，当世罕有！" << endl;
            break;
        case 2:
            cout << "卓尔独行，商海浮沉!!/n/n" << girlName << "成长成为商海女王！" << endl;
            break;
        }
    }


    return a.exec();
}

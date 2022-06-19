#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>

#include "integer.h"
#include "MyString.h"

using namespace std;

void TestInteger();
void TestString();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
/*
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "13FriendOfDemo_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
*/

    TestInteger();
    TestString();

    return a.exec();
}

void TestString()
{
    String str1("这里是中文");
    String str2 = "abcsdkj";
    cout << "str1:" << str1 << endl;
    cout << "str2:" << str2 << endl;
    cout << "对象之间的赋值：" << endl;
    str1 = str2;
    cout << "str1:" << str1 << endl;
    cout << "str2:" << str2 << endl;
}

void TestInteger()
{
    Integer num1(1024), num2(2048), num3;
    num3 = num1 + num2;
    cout << "num3 = num1 + num2的结果为：" << num3.IntValue() << endl;
    num3 = num1 - num2;
    cout << "num3 = num1 - num2的结果为：" << num3.IntValue() << endl;
    num3 = num1 * num2;
    cout << "num3 = num1 * num2的结果为：" << num3.IntValue() << endl;
    num3 = num1 / num2;
    cout << "num3 = num1 / num2的结果为：" << num3.IntValue() << endl;
    num3 = num1 % num2;
    cout << "num3 = num1 % num2的结果为：" << num3.IntValue() << endl;
}

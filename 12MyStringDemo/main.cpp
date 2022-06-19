#include <QCoreApplication>
#include "mystring.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}

void TestString(){
    string str1;
    cout << str1 << endl;
}

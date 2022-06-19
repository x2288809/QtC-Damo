#include <QCoreApplication>
#include <iostream>

#include "landownerv1.h"
#include "landownerv3.h"
#include "landowner.h"
#include "student.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int num = 7 + 9;
    cout << num << endl;

    Student* ptrStu1 = new Student("迪丽热巴", "微胖女孩");
    Student stu2 = {"刘强东", "不爱美人"};

    ptrStu1->InitScores();
    stu2.InitScores();

    ptrStu1->AddScore(78.9f);
    ptrStu1->AddScore(88.9f);
    ptrStu1->AddScore(98.9f);
    ptrStu1->AddScore(68.9f);
    ptrStu1->ShowInfo();
    stu2.AddScore(85.3);
    stu2.AddScore(75.3);
    stu2.AddScore(65.3);
    stu2.AddScore(95.3);
//    ptrStu1->SumScore();

    float DSumScore = ptrStu1->GetSumScore();
    cout << ptrStu1->GetName() <<"的总分是：" << DSumScore << endl;

    Student& scholar1 = stu2.GetSuperSchiolar(*ptrStu1);
    Student& scholar2 = ptrStu1->GetSuperSchiolar(stu2);

    cout << "学霸是：" << scholar1.GetName() << "\t" << scholar2.GetName() << endl;

    delete ptrStu1;
//    delete ptrStu1;

    /*
    LandOwner* ptr_landOwener1 = new LandOwner();
    LandOwner* ptr_landOwener2 = new LandOwner("专业斗地主");
    LandOwner* ptr_landOwener3 = new LandOwner("周扒皮");

    ptr_landOwener1->ShowInfo();
    ptr_landOwener2->ShowInfo();
    ptr_landOwener3->ShowInfo();


    cout << endl;

    ptr_landOwener2->TouchCard(20);


    cout << endl;

    delete ptr_landOwener1;
    delete ptr_landOwener2;
    delete ptr_landOwener3;
*/

    // 数据类型 变量名
//    int num;
//    num = 0;
//    LandOwnerV1 landOwnerV1;
//    landOwnerV3 landOwnerV3;
    //调用对象的成员方法
//    landOwnerV1.cards[0] = 9; //不能直接使用对象的私有成员

//    landOwnerV1.name = "周扒皮";
//    landOwnerV1.TouchCard(100);

//        landOwnerV3.name = "巴依老爷";
//        landOwnerV3.score = 100;
//    landOwnerV3.getName("巴萨老爷");
//    landOwnerV3.SetScore(114);
//    landOwnerV3.showScore();

//    Student stu1;   //在栈内存中直接分配空间
//    Student stu2("马化腾", "普通家庭");
//    Student stu3(45);
//    Student stu4 = 50;//只有一个带参构造时，这样使用也是对的
//    stu2.ShowInfo();

//    Student* stu5 = new Student("杰克马", "悔创阿里");
//    stu5->ShowInfo();

//    //当对象使用完毕时，记得delete，释放内存！！！
//    delete stu5;


    return 0;
//    return a.exec();
}

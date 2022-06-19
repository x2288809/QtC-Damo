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

    Student* ptrStu1 = new Student("�����Ȱ�", "΢��Ů��");
    Student stu2 = {"��ǿ��", "��������"};

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
    cout << ptrStu1->GetName() <<"���ܷ��ǣ�" << DSumScore << endl;

    Student& scholar1 = stu2.GetSuperSchiolar(*ptrStu1);
    Student& scholar2 = ptrStu1->GetSuperSchiolar(stu2);

    cout << "ѧ���ǣ�" << scholar1.GetName() << "\t" << scholar2.GetName() << endl;

    delete ptrStu1;
//    delete ptrStu1;

    /*
    LandOwner* ptr_landOwener1 = new LandOwner();
    LandOwner* ptr_landOwener2 = new LandOwner("רҵ������");
    LandOwner* ptr_landOwener3 = new LandOwner("�ܰ�Ƥ");

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

    // �������� ������
//    int num;
//    num = 0;
//    LandOwnerV1 landOwnerV1;
//    landOwnerV3 landOwnerV3;
    //���ö���ĳ�Ա����
//    landOwnerV1.cards[0] = 9; //����ֱ��ʹ�ö����˽�г�Ա

//    landOwnerV1.name = "�ܰ�Ƥ";
//    landOwnerV1.TouchCard(100);

//        landOwnerV3.name = "������ү";
//        landOwnerV3.score = 100;
//    landOwnerV3.getName("������ү");
//    landOwnerV3.SetScore(114);
//    landOwnerV3.showScore();

//    Student stu1;   //��ջ�ڴ���ֱ�ӷ���ռ�
//    Student stu2("����", "��ͨ��ͥ");
//    Student stu3(45);
//    Student stu4 = 50;//ֻ��һ�����ι���ʱ������ʹ��Ҳ�ǶԵ�
//    stu2.ShowInfo();

//    Student* stu5 = new Student("�ܿ���", "�ڴ�����");
//    stu5->ShowInfo();

//    //������ʹ�����ʱ���ǵ�delete���ͷ��ڴ棡����
//    delete stu5;


    return 0;
//    return a.exec();
}

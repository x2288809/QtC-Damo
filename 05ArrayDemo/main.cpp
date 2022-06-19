#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <ctime>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //ʵ������Ԫ�ص�ɾ���Ͳ���
    double power[99];
    int powerCount = 0;//��ǰ�����е�Ԫ�ظ���
    double insertPower;//Ҫ�����ս����
    int insertIndex = 0;//Ĭ�ϲ��뵽��һ��Ԫ��λ��
    power[powerCount++] = 45771;
    power[powerCount++] = 45034;
    power[powerCount++] = 43773;
    power[powerCount++] = 41074;
    double temp;
    //����
    for(int i = 0; i < powerCount;i++ ){
        for(int j = 0; j < powerCount - i - 1; i++){
            if(power[j] < power[j+1]){
                temp = power[j];
                power[j] = power[j+1];
                power[j+1] = temp;
            }
        }
    }
    //��ӡ
    cout << "power�����е�Ԫ�شӴ�С����power[" << powerCount << "] = {";
    for(int i = 0;i < powerCount; i++){
        cout << power[i];
        if(i < powerCount - 1)
            cout << ", ";
    }
    cout << "}\n";

    cout << powerCount << endl;

    //��ʼ��inserIndex������inserIndexΪ��������һ��λ��
    insertIndex = powerCount;
    cout << "������Ҫ���뵽power�����е����֣�";
    cin >> insertPower;

    //���룺����Ԫ�ز����Ժ󣬱�֤������Ȼ�������
    //1.�������ַ��������ĩβ�����½�������
    //2.1�ҵ���һ���Ȳ�������С��λ��insertIndex��
    for(int i = 0; i < powerCount;i++){
        if(insertPower > power[i]){
            insertIndex = i;
            break;
        }
    }
    //2.2�����һ��Ԫ�ؿ�ʼ�������ָ��Ƶ���һ��Ԫ���У�
    for(int i = powerCount - 1; i >= insertIndex;i--){
        power[i + 1] = power[i];
    }
    //2.3��Ҫ��������ָ�ֵ���±�ΪinsertIndex��Ԫ��
    power[insertIndex] = insertPower;
    //2.4��������ܳ���+1
    powerCount++;
    cout << powerCount << endl;
    //��ӡ
    cout << "power�����в���ս����Ӵ�С����power[" << powerCount << "] = {";
    for(int i = 0;i < powerCount; i++){
        cout << power[i];
        if(i < powerCount - 1)
            cout << ", ";
    }
    cout << "}\n";

    //ɾ��Ԫ�أ�����Ԫ��ɾ���Ժ󣬱�֤������Ȼ�������
    //1.�ҵ�Ҫɾ����Ԫ���±�
    double deletePower;
    int deleteIndex = -1;//int deleteIndex = INT_MIN;
    cout << "������Ҫɾ�������֣�";
    cin >> deletePower;
    for(int i = 0; i < powerCount;i++){
        if(deletePower == power[i]){
            deleteIndex = i;
            break;
        }
    }
    if(deleteIndex < 0){
        cout << "��������δ�ҵ���Ҫɾ�������֣�ɾ��ʧ�ܣ�" << endl;
    }else{
        //2.���ҵ����±꿪ʼ������һ��Ԫ�ظ�ֵ��ǰ��һ��Ԫ��
        for(int i = deleteIndex; i < powerCount - 1; i++){
            power[i] = power[i + 1];
        }
        //3.�ܳ���-1
        powerCount--;
    }

    //��ӡ
    cout << "ִ������������power�����е�Ԫ�شӴ�С����power[" << powerCount << "] = {";
    for(int i = 0;i < powerCount; i++){
        cout << power[i];
        if(i < powerCount - 1)
            cout << ", ";
    }
    cout << "}\n";

    /*
    //�����е�ֵ��ͣ���ƽ��ֵ�������ֵ������Сֵ��������������������ż���������������������е��±�
    int nums[] {8, 4, 2, 1, 23, 344, 12};
    int numsLen = sizeof (nums) / sizeof (int);//��������ĳ���
    int temps[numsLen];//��ʱ����
    for(int i = 0; i < numsLen; i++){
        temps[i] = nums[i];
    }
    int temp;//��ʱ����
    int sumNums = 0;//nums������ֵ�ĺ�
    double avgNums = 0.00;//nums������ֵ��ƽ����
    //��ӡ�����е����������
    cout << "nums����ԭʼֵ��nums[" << numsLen << "] = {";
    for(int i = 0;i < numsLen; i++){
        sumNums += nums[i];
        cout << nums[i];
        if(i < numsLen - 1)
            cout << ", ";
    }
    avgNums = sumNums / numsLen;
    cout << "}\nnums������ֵ�ĺͣ�" << sumNums << endl;
    cout << "nums������ֵ��ƽ������" << avgNums << endl;

    cout << endl;

    //�����ֵ����Сֵ
    int numsMax = nums[0];//�����һ������Ԫ�������ֵ
    int numsMaxIndex = 0;//���ֵ���±�
    int numsMin = nums[0];//�����һ������Ԫ������Сֵ
    int numsMinIndex = 0;//��Сֵ���±�
    for(int i = 1;i < numsLen;i++){
        //���ֵ
        if(nums[i] > numsMax){
            numsMax = nums[i];
            numsMaxIndex = i;
        }
        //��Сֵ
        if(nums[i] < numsMin){
            numsMin = nums[i];
            numsMinIndex = i;
        }
    }
    cout << "nums�����е����ֵ��nums[" << numsMaxIndex << "] = " << numsMax << endl;
    cout << "nums�����е���Сֵ��nums[" << numsMinIndex << "] = " << numsMin << endl;

    //ð�����򣺴Ӵ�С
    for(int i = 0;i < numsLen;i++ ){
        for(int j = 0;j < numsLen - i - 1;j++ ){
            if(nums[j] < nums[j + 1])
            {
                //����
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    //��ӡ
    cout << "nums�����е�Ԫ�شӴ�С����nums[" << numsLen << "] = {";
    for(int i = 0;i < numsLen; i++){
        cout << nums[i];
        if(i < numsLen - 1)
            cout << ", ";
    }
    cout << "}\n";

    //ѡ�����򣺴�С����
    for(int i = 0;i < numsLen - 1;i++ ){
        numsMin = nums[i];  //�����i��Ԫ������Сֵ��
        numsMinIndex = i;   //��С��Ԫ�ص��±�
        for(int j = i + 1;j < numsLen - i;j++ ){
            //����̨
            if(nums[j] < numsMin){
                numsMin = nums[j];
                numsMinIndex = j;
            }
        }
        //�����±�
        if(numsMinIndex > i){//���Բ�д��д���ٱ�1��
            temp = nums[numsMinIndex];
            nums[numsMinIndex] = nums[i];
            nums[i] = temp;
        }
    }
    //��ӡ
    cout << "nums�����е�Ԫ�ش�С��������nums[" << numsLen << "] = {";
    for(int i = 0;i < numsLen; i++){
        cout << nums[i];
        if(i < numsLen - 1)
            cout << ", ";
    }
    cout << "}\n";

    //��ʼ������
    for(int i = 0; i < numsLen; i++){
        nums[i] = temps[i];
    }

    //��������ǰ�󽻻�������ֻ����һ��
    for(int i = 0; i < numsLen / 2; i++){
        temp = nums[i];
        nums[i] = nums[numsLen - i -1];
        nums[numsLen - i - 1] = temp;
    }
    //��ӡ
    cout << "numsԭʼ������������nums[" << numsLen << "] = {";
    for(int i = 0;i < numsLen; i++){
        cout << nums[i];
        if(i < numsLen - 1)
            cout << ", ";
    }

    cout << "}\n\n";

    //��ʼ������
    for(int i = 0; i < numsLen; i++){
        nums[i] = temps[i];
    }

    //����������
    int jCount = 0;
    cout << "numsԭʼ�����е�������";
    for(int i = 0;i < numsLen ; i++){
        if(nums[i] % 2 != 0){
            cout << "nums[" << i << "] = " << nums[i] << " , ";
            jCount++;
        }
    }
    cout << "\nnums�����������ĸ�����" << jCount << endl;

    cout << endl;

    //��ż������
    int oCount = 0;
    cout << "numsԭʼ�����е�ż����";
    for(int i = 0;i < numsLen ; i++){
        if(nums[i] % 2 == 0){
            cout << "nums[" << i << "] = " << nums[i] << " , ";
            oCount++;
        }
    }
    cout << "\nnums������ż���ĸ�����" << oCount << endl;

    cout << endl;

    //��������������������е��±꣬û���ҵ����±�Ϊ-1
    int searchNum;//�û�Ҫ�ҵ�����
    int searchIndex = -1;
    cout << "������Ҫ���ҵ����֣�";
    cin >> searchNum;
    //ʹ��ѭ������
    for(int i = 0; i < numsLen ;i++ ){
        if(nums[i] == searchNum){
            searchIndex = i;
            break;
        }
    }
    if(searchIndex < 0){
        cout << "������û���ҵ�������֣�" << endl;
    }else{
        cout << "��Ҫ��������ǣ�nums[" << searchIndex << "] = " << searchNum
             << " �������±�Ϊ��" << searchIndex << endl;
    }
    */

    /*
    //��̬�شӼ���¼����Ϣ����ֵ����
    int n = 5;
    int nums[n];
    int numsLen = sizeof (nums) / sizeof (int);//��������ĳ���
    for(int i = 0;i < numsLen; i++){
        cout << "������� " << (i + 1) << " ������Ԫ�أ�";
        cin >> nums[i];
    }
    for(int i = 0; i < numsLen;i++){
        cout << nums[i] << '\t';
    }
    */

    return a.exec();
}

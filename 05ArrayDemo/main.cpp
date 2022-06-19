#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <ctime>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //实现数组元素的删除和插入
    double power[99];
    int powerCount = 0;//当前数组中的元素个数
    double insertPower;//要插入的战斗力
    int insertIndex = 0;//默认插入到第一个元素位置
    power[powerCount++] = 45771;
    power[powerCount++] = 45034;
    power[powerCount++] = 43773;
    power[powerCount++] = 41074;
    double temp;
    //排序
    for(int i = 0; i < powerCount;i++ ){
        for(int j = 0; j < powerCount - i - 1; i++){
            if(power[j] < power[j+1]){
                temp = power[j];
                power[j] = power[j+1];
                power[j+1] = temp;
            }
        }
    }
    //打印
    cout << "power数组中的元素从大到小排序：power[" << powerCount << "] = {";
    for(int i = 0;i < powerCount; i++){
        cout << power[i];
        if(i < powerCount - 1)
            cout << ", ";
    }
    cout << "}\n";

    cout << powerCount << endl;

    //初始化inserIndex，设置inserIndex为数组的最后一个位置
    insertIndex = powerCount;
    cout << "请输入要插入到power数组中的数字：";
    cin >> insertPower;

    //插入：数组元素插入以后，保证数组仍然是有序的
    //1.把心数字放在数组的末尾，重新进行排序
    //2.1找到第一个比插入数字小的位置insertIndex，
    for(int i = 0; i < powerCount;i++){
        if(insertPower > power[i]){
            insertIndex = i;
            break;
        }
    }
    //2.2从最后一个元素开始，将数字复制到后一个元素中，
    for(int i = powerCount - 1; i >= insertIndex;i--){
        power[i + 1] = power[i];
    }
    //2.3将要插入的数字赋值给下标为insertIndex的元素
    power[insertIndex] = insertPower;
    //2.4将数组的总长度+1
    powerCount++;
    cout << powerCount << endl;
    //打印
    cout << "power数组中插入战力后从大到小排序：power[" << powerCount << "] = {";
    for(int i = 0;i < powerCount; i++){
        cout << power[i];
        if(i < powerCount - 1)
            cout << ", ";
    }
    cout << "}\n";

    //删除元素：数组元素删除以后，保证数组仍然是有序的
    //1.找到要删除的元素下标
    double deletePower;
    int deleteIndex = -1;//int deleteIndex = INT_MIN;
    cout << "请输入要删除的数字：";
    cin >> deletePower;
    for(int i = 0; i < powerCount;i++){
        if(deletePower == power[i]){
            deleteIndex = i;
            break;
        }
    }
    if(deleteIndex < 0){
        cout << "在数组中未找到您要删除的数字，删除失败！" << endl;
    }else{
        //2.从找到的下标开始，后面一个元素赋值给前面一个元素
        for(int i = deleteIndex; i < powerCount - 1; i++){
            power[i] = power[i + 1];
        }
        //3.总长度-1
        powerCount--;
    }

    //打印
    cout << "执行上述操作后power数组中的元素从大到小排序：power[" << powerCount << "] = {";
    for(int i = 0;i < powerCount; i++){
        cout << power[i];
        if(i < powerCount - 1)
            cout << ", ";
    }
    cout << "}\n";

    /*
    //数组中的值求和，求平均值，求最大值，求最小值，排序，求奇数个数，求偶数个数，找数字在数组中的下标
    int nums[] {8, 4, 2, 1, 23, 344, 12};
    int numsLen = sizeof (nums) / sizeof (int);//计算数组的长度
    int temps[numsLen];//临时数组
    for(int i = 0; i < numsLen; i++){
        temps[i] = nums[i];
    }
    int temp;//临时变量
    int sumNums = 0;//nums数组中值的和
    double avgNums = 0.00;//nums数组中值的平均数
    //打印数组中的数，并求和
    cout << "nums数组原始值：nums[" << numsLen << "] = {";
    for(int i = 0;i < numsLen; i++){
        sumNums += nums[i];
        cout << nums[i];
        if(i < numsLen - 1)
            cout << ", ";
    }
    avgNums = sumNums / numsLen;
    cout << "}\nnums数组中值的和：" << sumNums << endl;
    cout << "nums数组中值的平均数：" << avgNums << endl;

    cout << endl;

    //求最大值和最小值
    int numsMax = nums[0];//假设第一个数组元素是最大值
    int numsMaxIndex = 0;//最大值的下标
    int numsMin = nums[0];//假设第一个数组元素是最小值
    int numsMinIndex = 0;//最小值的下标
    for(int i = 1;i < numsLen;i++){
        //最大值
        if(nums[i] > numsMax){
            numsMax = nums[i];
            numsMaxIndex = i;
        }
        //最小值
        if(nums[i] < numsMin){
            numsMin = nums[i];
            numsMinIndex = i;
        }
    }
    cout << "nums数组中的最大值：nums[" << numsMaxIndex << "] = " << numsMax << endl;
    cout << "nums数组中的最小值：nums[" << numsMinIndex << "] = " << numsMin << endl;

    //冒泡排序：从大到小
    for(int i = 0;i < numsLen;i++ ){
        for(int j = 0;j < numsLen - i - 1;j++ ){
            if(nums[j] < nums[j + 1])
            {
                //交换
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    //打印
    cout << "nums数组中的元素从大到小排序：nums[" << numsLen << "] = {";
    for(int i = 0;i < numsLen; i++){
        cout << nums[i];
        if(i < numsLen - 1)
            cout << ", ";
    }
    cout << "}\n";

    //选择排序：从小到大
    for(int i = 0;i < numsLen - 1;i++ ){
        numsMin = nums[i];  //假设第i个元素是最小值了
        numsMinIndex = i;   //最小的元素的下标
        for(int j = i + 1;j < numsLen - i;j++ ){
            //打擂台
            if(nums[j] < numsMin){
                numsMin = nums[j];
                numsMinIndex = j;
            }
        }
        //交换下标
        if(numsMinIndex > i){//可以不写，写了少比1次
            temp = nums[numsMinIndex];
            nums[numsMinIndex] = nums[i];
            nums[i] = temp;
        }
    }
    //打印
    cout << "nums数组中的元素从小到大排序：nums[" << numsLen << "] = {";
    for(int i = 0;i < numsLen; i++){
        cout << nums[i];
        if(i < numsLen - 1)
            cout << ", ";
    }
    cout << "}\n";

    //初始化数组
    for(int i = 0; i < numsLen; i++){
        nums[i] = temps[i];
    }

    //逆序排序：前后交换，但是只交换一半
    for(int i = 0; i < numsLen / 2; i++){
        temp = nums[i];
        nums[i] = nums[numsLen - i -1];
        nums[numsLen - i - 1] = temp;
    }
    //打印
    cout << "nums原始数组逆序排序：nums[" << numsLen << "] = {";
    for(int i = 0;i < numsLen; i++){
        cout << nums[i];
        if(i < numsLen - 1)
            cout << ", ";
    }

    cout << "}\n\n";

    //初始化数组
    for(int i = 0; i < numsLen; i++){
        nums[i] = temps[i];
    }

    //求奇数个数
    int jCount = 0;
    cout << "nums原始数组中的奇数：";
    for(int i = 0;i < numsLen ; i++){
        if(nums[i] % 2 != 0){
            cout << "nums[" << i << "] = " << nums[i] << " , ";
            jCount++;
        }
    }
    cout << "\nnums数组中奇数的个数：" << jCount << endl;

    cout << endl;

    //求偶数个数
    int oCount = 0;
    cout << "nums原始数组中的偶数：";
    for(int i = 0;i < numsLen ; i++){
        if(nums[i] % 2 == 0){
            cout << "nums[" << i << "] = " << nums[i] << " , ";
            oCount++;
        }
    }
    cout << "\nnums数组中偶数的个数：" << oCount << endl;

    cout << endl;

    //查找输入的数字在数组中的下标，没有找到则下标为-1
    int searchNum;//用户要找的数字
    int searchIndex = -1;
    cout << "请输入要查找的数字：";
    cin >> searchNum;
    //使用循环查找
    for(int i = 0; i < numsLen ;i++ ){
        if(nums[i] == searchNum){
            searchIndex = i;
            break;
        }
    }
    if(searchIndex < 0){
        cout << "数组中没有找到这个数字！" << endl;
    }else{
        cout << "您要查的数字是：nums[" << searchIndex << "] = " << searchNum
             << " ，它的下标为：" << searchIndex << endl;
    }
    */

    /*
    //动态地从键盘录入信息并赋值数组
    int n = 5;
    int nums[n];
    int numsLen = sizeof (nums) / sizeof (int);//计算数组的长度
    for(int i = 0;i < numsLen; i++){
        cout << "请输入第 " << (i + 1) << " 个数组元素：";
        cin >> nums[i];
    }
    for(int i = 0; i < numsLen;i++){
        cout << nums[i] << '\t';
    }
    */

    return a.exec();
}

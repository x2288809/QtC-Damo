#include "landownerv3.h"

landOwnerV3::landOwnerV3()
{

}
void landOwnerV3::showScore()
{
    cout << _name << "当前的积分为：" << _score << endl;
}
void landOwnerV3::SetScore(long lScore)
{
    /** 假如积分为负，则为0 */
    if(lScore < 0)
    {
        _score = 0;
    }else
    _score = lScore;
}

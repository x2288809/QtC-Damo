#include "landownerv3.h"

landOwnerV3::landOwnerV3()
{

}
void landOwnerV3::showScore()
{
    cout << _name << "��ǰ�Ļ���Ϊ��" << _score << endl;
}
void landOwnerV3::SetScore(long lScore)
{
    /** �������Ϊ������Ϊ0 */
    if(lScore < 0)
    {
        _score = 0;
    }else
    _score = lScore;
}

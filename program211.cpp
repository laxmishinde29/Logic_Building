#include<iostream>
using namespace std;

int SumDiffrence(int iNo)
{
    int iDigit = 0, iSumE = 0, iSumO = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumE = iSumE + iDigit;
        }
        else
        {
            iSumO = iSumO + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSumE - iSumO;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = SumDiffrence(iValue);

    cout<<"Diffrence is : "<<iRet<<endl;

    return 0;
}
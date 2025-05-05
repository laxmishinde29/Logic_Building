#include<iostream>
using namespace std;

int SumDigitsI(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }  
    return iSum;
}

int SumDigitsR(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        SumDigitsR(iNo);
    }  
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;
    iRet = SumDigitsR(iValue);
    cout<<"Sum of digits : "<<iRet<<endl;
    return 0;
}
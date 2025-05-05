#include<iostream>
using namespace std;

int Count(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }  
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;
    iRet = Count(iValue);
    cout<<"Number of digits are : "<<iRet<<endl;
    return 0;
}
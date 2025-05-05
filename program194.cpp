// Approach 2

#include<iostream>
using namespace std;

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number : "<<endl;
    cin>>iValue1;

    cout<<"Enter second number : "<<endl;
    cin>>iValue2;

    iRet = Addition(iValue1, iValue2);

    cout<<"Addition is : "<<iRet<<endl;

    return 0;
}
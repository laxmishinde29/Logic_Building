#include<stdio.h>

int CountOne(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        iSum = iSum + iDigit;
        iNo = iNo / 2;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Number of 1 are : %d\n",iRet);

    return 0;
}




/*

int No1 = 21;
int No2 = 15;






*/
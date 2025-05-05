#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit % 2 == 0)
        {
           iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of ven digits are : %d\n",iRet);

    return 0;
}
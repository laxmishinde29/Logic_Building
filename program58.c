#include<stdio.h>

void DisplayEvenDigits(int iNo)
{
    int iDigit = 0;

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
           printf("%d\n",iDigit);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);

    return 0;
}
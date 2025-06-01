#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i<= iNo; i++)
    {
        if(iNo < 0)
        {
            printf("%d",i)
        }
    }
}     

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    DisplayFactor(iValue);

    return 0;
}
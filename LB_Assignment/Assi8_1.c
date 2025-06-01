
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);    
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    Display(iValue);    // Display(4)
    
    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    return 0;
}
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
   
    for(iCnt = 0; iCnt <= iNo; iCnt++ )
    {
        printf("%d\t",iCnt);    
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);        //Display(4)

    return 0;
}
// Problem Statement : Accept 2 numbers from user and perform its addition

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iResult = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;

    printf("Addition is : %d\n",iResult);
    
    return 0;
}
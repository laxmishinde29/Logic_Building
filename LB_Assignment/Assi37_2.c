#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 131088;
    unsigned int iResult = 0;

    printf("Enter first number :\n");
    scanf("%d", & iNo);
    
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("5th and 18th bit is ON \n");
    }
    else
    {
        printf(" bit is OFF\n");
    }


    return 0;

}
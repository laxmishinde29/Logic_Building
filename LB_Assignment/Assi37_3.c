#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 135282752;
    unsigned int iResult = 0;

    printf("Enter first number :\n");
    scanf("%d", & iNo);
    
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("7th & 15th & 21st & 28th bit is ON \n");
    }
    else
    {
        printf(" bit is OFF\n");
    }


    return 0;

}
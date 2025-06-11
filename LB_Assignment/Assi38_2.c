#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0xfffffff7;
    unsigned int iResult = 0;

    printf("Enter number :\n");
    scanf("%d", & iNo);
    
    iResult = iNo & iMask;

        printf(" updated number is : %u\n",iResult);


    return 0;

}
#include<stdio.h>

int main()
{
    unsigned int iNo = 0;f 
    unsigned int iMask = 0xfffffdff;     
    unsigned int iResult = 0;

    printf("Enter number :\n");
    scanf("%d", & iNo);
    
    iResult = iNo & iMask;

    printf(" updated number is : %u\n",iResult);

    return 0;

}


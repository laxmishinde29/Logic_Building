#include<stdio.h>

int Difference(char *str)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iDiff = 0;

    

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt1++;
        }
        *str++;
    }
    printf("Number of capital letters : %d\n",iCnt1);

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt2++;
        }
        *str++;
    }
    printf("Number of small letters : %d\n",iCnt2);
    
    iDiff = iCnt2 - iCnt1;

    return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}
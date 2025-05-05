#include<stdio.h>

int strlenSmallX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenSmallX(Arr); // strlenX(100)

    printf("Number of small letters are : %d\n",iRet);

    return 0;
}
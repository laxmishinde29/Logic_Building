#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurance(char *str, char ch)
{
    int iCount = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCount;
            break;
        }
        str++;
        iCount++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the chracter : \n");
    scanf(" %c",&ch);

    iRet = FirstOccurance(Arr,ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("Index of First ocuurance of that character is : %d\n",iRet);
    }

    return 0;
}
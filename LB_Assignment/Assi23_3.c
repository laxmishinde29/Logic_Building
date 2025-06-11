#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{    
        if((ch >= 'a') && (ch <= 'z'))
        {
            return TRUE;
        }    
        else
        {
            return FALSE;
        }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter the character \n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small case character");
    }

    return 0;
}
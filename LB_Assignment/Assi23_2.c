#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{    
        if((ch >= '0') && (ch <= '9'))
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
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }

    return 0;
}
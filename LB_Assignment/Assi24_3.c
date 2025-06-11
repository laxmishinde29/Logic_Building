#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char *ch)
{
    if((*ch == '!') || (*ch == '@') || (*ch == '#') || (*ch == '$') || (*ch == '%') || (*ch == '^') || (*ch == '*'))
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
    char Arr[10];
    BOOL bRet = false;

    printf("Enter the character \n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkSpecial(Arr);

    if(bRet == TRUE)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;

}
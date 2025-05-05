#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str, char ch)   
{
    bool bFlag = false;

    while(*str != '\0')
    {   
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[100];
    char cValue;
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character that you want to search : \n");
    scanf("%c", &cValue);

    bRet = CheckOccurance(Arr, cValue);

    if(bRet == true)
    {
        printf("character is present in string\n");
    }
    else
    {
        printf("character is not present in string\n");
    }
    return 0;
}
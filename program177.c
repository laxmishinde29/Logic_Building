#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str)   
{
    bool bFlag = false;

    while(*str != '\0')
    {   
        if((*str == 'l') || (*str == 'L'))
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
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    bRet = CheckOccurance(Arr); // strlenX(100)

    if(bRet == true)
    {
        printf("l is present in string\n");
    }
    else
    {
        printf("l is not present in string\n");
    }
    return 0;
}
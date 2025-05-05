#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        (*str) = (*str) + 32;
        str++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}
// String 1 :   hello
// String 2 :   olhel

// String 1 :   CAT
// String 2 :   ACT

// String 1 :   TAN
// String 2 :   ANT

#include<stdio.h>
#include<stdbool.h>

void CalculateFrequency(char str[])
{
    int Count[26] = {0};
    int i = 0;

    while(*str != '\0')
    {
        Count[*str - 'a']++;
        str++;
    }

    for(i = 0 ;i < 26; i++)
    {
        printf("Frequency of %c is %d\n",'a'+i, Count[i]);
    }
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%s",Arr);

    CalculateFrequency(Arr);

    return 0;
}
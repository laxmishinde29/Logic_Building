#include<stdio.h>

int CountVowel(char *str)   // Case Insensitive
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || 
        (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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
    
    //scanf("%s",Arr);

    iRet = CountVowel(Arr); // strlenX(100)

    printf("Number of vowels are : %d\n",iRet);

    return 0;
}
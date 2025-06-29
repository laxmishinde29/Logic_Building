// String 1 :   hello
// String 2 :   olhel

// String 1 :   CAT
// String 2 :   ACT

// String 1 :   TAN
// String 2 :   ANT

#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(char str1[], char str2[])
{
    return true;
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    printf("Enter first string : \n");
    scanf("%s",Arr);

    printf("Enter second string : \n");
    scanf("%s",Brr);
    
    bRet = CheckAnagram(Arr,Brr);

    if(bRet == true)
    {
        printf("Strings are anagram\n");
    }
    else
    {
        printf("Strings are not anagram\n");
    }

}
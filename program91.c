// Input : 5
//        A     *   B    *      C      *        D       *       E       *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    //      1                      2          3 
    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t*\t",ch);    // 3
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);    // Display(4)

    return 0;
}
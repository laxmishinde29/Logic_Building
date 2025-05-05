// Input : 5
//        A     1   B    2      C      3        D       4       E       5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    //      1                      2          3 
    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t%d\t",ch,iCnt);    // 3
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
// Input : 5
//             -5   5   -4  4  -3   3  -2   2  -1   1

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //      1           2          3 
    for(iCnt = -iNo ; iCnt < 0 ; iCnt++)
    {
        printf("%d\t%d\t",iCnt,-iCnt);
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
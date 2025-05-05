// Input : 5
// Output : 1   *   1   2   *   2   3   *  3   4    *   4   5   *   5  


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //      1           2          3 
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
        printf("*\t");
        printf("%d\t",iCnt);
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
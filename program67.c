//  *   *   *   *   *

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    
    //      1         2         3  
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iCnt);  // 4        
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}
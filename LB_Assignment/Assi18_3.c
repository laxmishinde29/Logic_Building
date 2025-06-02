#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0';

    //    1       2        3
    for(i = 1; i<= iRow; i++)   // Outer
    {   //    1         2       3 
        for(j = 1,ch1 = 'a'; j <= iCol; j++,ch1++)  // Inner
        {
            if((i % 2)== 0)
            {
                printf("%d\t",j*2-1);   
            }
            else
            {
                printf("%d\t",j*2);
            }
        }
        
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
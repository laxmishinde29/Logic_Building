#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int i = 0;
    printf("Elements in reverse order are : \n");
    
    for(i = iSize -1; i >= 0; i--)
    {  
        printf("%d\n",Arr[i]);
    }
}

int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0;

    printf("Enter number of elements that you want to enter : \n"); // 1
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));                      // 2

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)                                     // 3
    {
        scanf("%d",&Brr[i]);
    }

    Display(Brr,iCount);                                     // 4

    free(Brr);                                                      // 5
    return 0;
}
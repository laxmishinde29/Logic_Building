#include<stdio.h>
#include<stdlib.h>

_____  ______(int Arr[], int iSize)
{
    // Logic
}

int main()
{   
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = _______ (Brr,iCount);

    free(Brr);

    return 0;
}

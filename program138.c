#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int i = 0;
    int iMin = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0, iRet = 0;

    printf("Enter number of elements that you want to enter : \n"); // 1
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));                      // 2

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)                                     // 3
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Minimum(Brr,iCount);                                     // 4

    printf("Minimum number is : %d\n",iRet);

    free(Brr);                                                      // 5
    return 0;
}
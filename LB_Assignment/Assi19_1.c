#include<stdio.h>

int Difference(int Arr[],int iLength)
{

}

   int main()
{   
    int iCount = 0, i = 0, iRet = 0, iValue = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Enter the element that you want to search : \n");
    scanf("%d", &iValue);

    iRet = Search(Brr,iCount,iValue);
    printf("Frequency of that number is : %d\n",iRet);
    
    free(Brr);

    return 0;
}


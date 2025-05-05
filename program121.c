#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int iCount = 0, i = 0;
    int *Brr = NULL;

    //Step 1 :    Accept number of elements from user
    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    //Step 2 :    Allocate dynamic memory for that number of elements
    Brr = (int *)malloc(iCount * sizeof(int));

    //Step 3 :    Accept the values from user and store into that memory
    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Entered elements are : \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    //Step 4 :    Pass the address of that memory to the function (Any)
    // Missing


    //Step 5 :    After using that memory free it explicitely
    free(Brr);

    return 0;
}

/*

Step 1 :    Accept number of elements from user

Step 2 :    Allocate dynamic memory for that number of elements

Step 3 :    Accept the values from user and store into that memory

Step 4 :    Pass the address of that memory to the function (Any)

Step 5 :    After using that memory free it explicitely

*/
#include<stdio.h>

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int A = 0, B = 0;

    printf("Enter first number : \n");
    scanf("%d",&A);

    printf("Enter second number : \n");
    scanf("%d",&B);

    Swap(&A, &B);   // Swap(100,200)

    printf("Value of A after swapping : %d\n",A);   // 21
    printf("Value of B after swapping : %d\n",B);   // 11
    return 0;
}
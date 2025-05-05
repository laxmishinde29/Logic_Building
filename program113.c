#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};
    int i = 0;

    //    1      2      3     
    for(i = 0; i < 5; i++)
    {
        printf("%d\n",Arr[i]); // 4
    }

    return 0;
}
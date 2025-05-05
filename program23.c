#include<stdio.h>

void Display()
{
    int iCnt = 0;

    iCnt = 1;                       //1
    while( iCnt <= 3 )               //2 
    {
        printf("Jay Hanuman...\n"); //4     
        iCnt++;                     //3
    }
}

int main()
{
    Display();         

    return 0;
}
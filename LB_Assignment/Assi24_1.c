#include<stdio.h>

void DisplayASCII()
{
    int iNo = 0;
    
    for(iNo = 0; iNo <= 255; iNo++)
    {
        printf("ASCII value of character %c = %d\t%x\t%o \n",iNo,iNo,iNo,iNo);
    }
        
}

int main()
{
    DisplayASCII();

    return 0;
}
#include<stdio.h>

//              000000100100000
/*
    iNo     11              0   0   0   0   1   0   1   1
       Mask                 1   0   0   0   1   0   0   0
                            ----------------------------------- &
                            1   0   0   0   1   0   0   0           Result


    iNo     20              0   0   0   1   1   1   0   0
       Mask                 1   0   0   0   1   0   0   0
                            ----------------------------------- &
                            0   0   0   0   1   0   0   0           Result
*/
int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 288;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("6th and 9th bits are ON\n");
    }
    else
    {
        printf("Bits are OFF\n");
    }
    
    return 0;
}


//  0000    0000    0000    0000    0000    0001    0010    0000    
//  0x00000120
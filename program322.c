#include<stdio.h>

/*
    iNo     11              0   0   0   0   1   0   1   1
       Mask                 0   0   0   0   1   0   0   0
                            ----------------------------------- &
                            0   0   0   0   1   0   0   0           Result


    iNo     20              0   0   0   1   0   1   0   0
       Mask                 0   0   0   0   1   0   0   0
                            ----------------------------------- &
                            0   0   0   0   0   0   0   0           Result
*/
int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000008;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
    }
    
    return 0;
}

/*
    -----------------------------------
    OP1     OP2     &       |       ^
    -----------------------------------
    1       1       1       1       0
    1       0       0       1       1
    0       1       0       1       1
    0       0       0       0       0
    -----------------------------------
*/
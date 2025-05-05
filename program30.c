#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : CalculateTicket
//  Description :   Used to display ticket price based on age 
//  Input :         Integer
//  Output :        Integer
//  Author :        Piyush Manohar Khairnar
//  Date :          29/04/2024
//
/////////////////////////////////////////////////////////////

int CalculateTicket(int iAge)
{
    if((iAge >= 0) && (iAge <= 4))
    {
        return 0;
    }
    else if((iAge > 4) && (iAge <= 10))
    {
        return 900;
    }
    else if((iAge > 10) && (iAge <= 50))
    {
        return 2000;
    }
    else if(iAge > 50)
    {
        return 500;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter your age : \n");
    scanf("%d",&iValue);

    iRet = CalculateTicket(iValue);
    printf("Your ticket price is : %d\n",iRet);

    return 0;
}
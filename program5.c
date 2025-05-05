/*
    Step 1 :    Understand the problem statement
    Step 2 :    Write the algorithm
    Step 3 :    Decide the programming language
    Step 4 :    Write the progream
    Step 5 :    Test the program
*/

//
//  Problem statement : Accept 2 numbers and perform addition
//

// Step 1 : Understand the problem statement
// We conclude that the 2 numbers are of floating point format

// Step 2 : Write the algorithm
/*
    START
        Accept first number from user and consider it as No1
        Accept second number from user and consider it as No2
        Create one variable to store the answer as Ans
        Perform the addition of No1 and No2
        Store the result into Ans
        Display the value of Ans as a result
    STOP
*/

// Step 3 : Decide the programming language
// We are going to write the code in C programming

// Step 4 : Write the program

#include<stdio.h>

float Addition(float fNo1, float fNo2)
{
    float fAns = 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1, fValue2);

    printf("Addition is : %f\n",fResult);
    
    return 0;
}

// Step 5 : Test the program
// Test case
// Input 1 = 10.0  Input 2 = 20.0   Result = 30.0
// Input 1 = 10.0  Input 2 = 0.0   Result = 10.0
// Input 1 = 0.0  Input 2 = 10.0   Result = 10.0
// Input 1 = 0.0  Input 2 = 0.0   Result = 0.0
// Input 1 = 10.0  Input 2 = -7.0   Result = 3.0
// Input 1 = -10.0  Input 2 = -7.0   Result = -17.0

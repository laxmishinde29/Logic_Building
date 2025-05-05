#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo >= 30) && (iNo <= 50))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);
    bRet = CheckRange(iValue);
    if(bRet == true)
    {   printf("YES\n");    }
    else
    {   printf("NO\n");     }
    
    return 0;
}
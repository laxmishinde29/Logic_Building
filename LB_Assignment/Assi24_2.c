#include<stdio.h>

void Display(char *ch)
{
    if((*ch >= 'a') && (*ch <= 'z'))
    {
        *ch = *ch - 32;
    }
    else if((*ch >= 'A') && (*ch <= 'Z'))
    {
        *ch = *ch + 32;
    }
    else
    {
        *ch = *ch;
    }
    
}

int main()
{
    char Arr[10];

    printf("Enter the character \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    printf(Arr);

    return 0;

}
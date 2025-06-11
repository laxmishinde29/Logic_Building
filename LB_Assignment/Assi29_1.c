#include<stdio.h>

void strcpyToggle(char *Dest, char *Src)
{
    while(*Src != '\0')
    {
        if(*Src != ' ')
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }

    *Dest = '\0';
}

int main()
{    
    char Arr[30];
    char Brr[30];

    strcpyToggle(Brr, Arr);  // strcpyX(200,100);
    
    printf("%s",brr);

    return 0;
}
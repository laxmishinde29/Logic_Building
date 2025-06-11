#include<stdio.h>

void strcpycapitalX(char *Dest, char *Src)
{
    while(*Src != '\0')
    {
        if((*Src >= 'A') && (*Src <= 'Z'))
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
    char Arr[30] = "Marvellous Infosystems";
    char Brr[30] = "Logic Building";

    strcpycapitalX(Brr, Arr); Assi30_

    printf("%s",arr);
    
    return 0;
}
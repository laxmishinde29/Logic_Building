#include<stdio.h>

void strcatX(char *Dest, char *Src)
{
    while(*Dest != '\0')
    {
        Dest++;
    }

    while(*Src != '\0')
    {
        *Dest = *Src;
        Dest++;
        Src++;
    }

    *Dest = '\0';
}

int main()
{    
    char Arr[30] = "Marvellous Infosystems";
    char Brr[30] = "Logic Buliding";

    strcatX(Brr, Arr);  // strcpyX(200,100);

    cout<<"Destination string is : "<<Brr<<endl;
    
    return 0;
}
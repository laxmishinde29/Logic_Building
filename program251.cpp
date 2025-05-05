// Source : HEllo WorLd
// Destination : lloord

#include<iostream>
using namespace std;

void strcpysmallX(char *Dest, char *Src)
{
    while(*Src != '\0')
    {
        if((*Src >= 'a') && (*Src <= 'z'))
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

    cout<<"Enter the source string : "<<endl;
    cin.getline(Arr,30);

    strcpysmallX(Brr, Arr);  // strcpyX(200,100);

    cout<<"Destination string is : "<<Brr<<endl;
    
    return 0;
}
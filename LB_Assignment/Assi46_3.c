#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char FileName[50];
    int fd = 0;
    char Arr[10];
    int iRet = 0;

    printf("Enter the file that you want to open\n");
    scanf("%s",FileName);
   
    fd = open(FileName,O_RDONLY);

    while(1)
    {
        iRet = read(fd,Arr,10);     // 10
        if(iRet == 0)
        {
            break;
        }
    }
   
    close(fd);
    
    return 0;
}
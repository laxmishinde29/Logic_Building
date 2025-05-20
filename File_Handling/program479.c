#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Arr[100];
    int iRet = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    printf("Enter the data that you want to write : \n");
    scanf(" %[^'\n']s",Arr);

    iRet = write(fd,Arr,strlen(Arr));
    
    printf("Number of bytes written into the file are : %d\n",iRet);

    close(fd);

    return 0;
}
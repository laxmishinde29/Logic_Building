#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Buffer[100] = {'\0'};
    int iRet = 0;
    int i = 0, iCount = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == 'a' || Buffer[i] == 'e'||Buffer[i] == 'i'||Buffer[i] == 'o'||Buffer[i] == 'u'||Buffer[i] == 'A' || Buffer[i] == 'E'||Buffer[i] == 'I'||Buffer[i] == 'O'||Buffer[i] == 'U')
            {
                iCount++;
            }
        }
    }

    printf("Number of vowels are : %d\n",iCount);
    
    close(fd);

    return 0;
}

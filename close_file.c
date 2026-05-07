#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file.");
    }
    else{
        printf("File gets open with fd : %d ",fd);
    }

    close(fd);
    
    return 0;
}
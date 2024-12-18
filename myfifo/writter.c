#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#define FIFO_NAME "myfifo"
#define SIZE 100
int main()
{
 int fd;
 char data[SIZE];
 
 fd=open("myfifo",O_WRONLY);
 if(fd==-1)
{
 printf("Failure in opening the file");
 exit(1);
}
 snprintf(data,SIZE,"Message from the writer");
 write(fd,data,strlen(data)+1);
 close(fd);
}

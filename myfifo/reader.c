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
 
 fd=open("myfifo",O_RDONLY);
 if(fd==-1)
{
 printf("Error opening the FIFO for reading");
 exit(0);
}
  ssize_t bytes=read(fd,data,SIZE);
  printf("Recieved:%s",data);
  close(fd);
  
}

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
pid_t p=fork();
if(p<0){
printf("fork fail");
exit(1);
}
else if(p==0){
printf("I am a child procrss with id:%d", getpid());
printf("my parent id is %d",getpid());
}
else{
printf("I am a parent process with id:%d",getpid());
printf("my child process  is %d",p);
}
}

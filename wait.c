#include<sys/types.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
printf("Likhitha BC\nAIT24BEAI061");
char *cmnd="ls";
char *arg_list[]={"ls","-l",NULL};
printf("before calling execvp()\n");
printf("creating another process using fork()\n");
pid_t p=fork();
int status=0;
if(p==0)
{
printf("child process\n");
status=execvp(cmnd,arg_list);
if(status==-1)
{
printf("INCORRECT TERMINATION\n");
exit(1);
}
}
else
{
printf("parent process\n");
wait(NULL);
printf("now this line will be executed\n");
}
}


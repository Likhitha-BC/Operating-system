#include<stdio.h>
#include<unistd.h>
int main()
{
printf("Likhitha BC\nAIT24BEAI061");
char *cmnd="ls";
char *arg_list[]={"ls","-1",NULL};
printf("before calling execvp()\n");
printf("creating another process  using fork()\n");
pid_t p=fork();
int status=0;
if(p==0)
{
printf("child process\n");
 status=execvp(cmnd,arg_list);
if(status==-1)
{
printf("INCORRECT TERMINATION\n");
}
}
else	
{
printf("parent process\n");
printf("Status:%d\n",status);
printf("now this line will be executed\n");
}
}

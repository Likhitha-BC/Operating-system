#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
printf("Likhitha BC\nAIT24BEAI061");
pid_t pid;
pid=fork();
if(pid<0)
{
perror("fork");
return 1;
}
if(pid==0)
{
printf("child is having ID%d\n:",getpid());
printf("my parent is having ID%d\n",getpid());
}
else{
printf("Parent(P)is having ID %d\n",getpid());
printf("ID of P's child is%d\n",pid);
pid_t wait(int *wstatus);
printf("A\nB\nC\nD\n");
}

}

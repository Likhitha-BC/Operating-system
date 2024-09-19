#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
printf("Likhitha BC\nAIT24BEAI061\n");
pid_t p=fork();
if(p<0){
printf("fork fail");
exit(1);
}
printf("hello all,my process is :%d",getpid());
}


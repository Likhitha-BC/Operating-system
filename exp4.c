
#include<stdio.h>
#include<stdlib.h>
int mutex=1;
int full=0;
int empty=10;
int main()
{
printf("press 1 for producer\n");
printf("press 2 for consumer\n");
printf("press 3 for exit\n");
while(1){
again:printf("enter your choice\n");
int n;
scanf("%d", &n);
switch(n){
case 1:
if((mutex==1) && (empty!=0)){
producer();
}
else{
printf("the buffer is full\n");
}
break;
case 2:
if(mutex==1) && (full!=0)){
consumer();
}
else{
printf("the buffer is empty\n");
}
break;
case 3:
exit(0);
break;
default:
print("invalid input\n");
goto again;
}
}
}
void producer()
{
--mutex;
--full;
++empty;
++mutex;
}
void consumer()
{
--mutex;
--full;
++empty;
++mutex;
}


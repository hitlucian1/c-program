#include<stdio.h>
#include<unistd.h>
void main(){
    int x;
    x=0;
    fork();
    x=1;
    printf("i am a process: %ld and x is: %d\n",(long)getpid(),x);
}
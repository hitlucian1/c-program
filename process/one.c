#include<stdio.h>
#include<unistd.h>
void main(){
    printf("i am a child process %ld\n",(long)getpid());
    printf("i am a parent process %ld\n",(long)getppid());
}
#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>

void main(){
    pid_t pid;
    int status;
    if((pid=fork())<0){
        printf("error");
    }
    else if(pid==0){
        sleep(1);
        exit(1);
    }
    else do{
        if(pid=waitpid(pid,&status,WNOHANG)==-1){
            printf("error");
        }
        else if(pid==0){
            printf("child is running");
        }
    }while(pid==0);
}
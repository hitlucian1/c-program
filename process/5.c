#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>

void main(){
    pid_t childpid;
    childpid=fork();
    if(childpid==0){
        printf("inside child\n");

    }
    else{
        wait(NULL);
        printf("in parent");
        
    }
}
#include<stdio.h>
#include<unistd.h>
int main(){
    pid_t childpid;
    childpid=fork();
    if(childpid==-1){
        printf("error");
        return 1;
    }
    if(childpid==0){
        printf("child: %ld",(long)getppid());
    }
    else{
        printf("parent: %ld",(long)getpid());
    }
}
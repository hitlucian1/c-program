#include<stdio.h>
#include<unistd.h>
int main(){
    pid_t childpid;
    childpid=fork();
    if(childpid==-1){
        printf("failed");
        return 1;
    }
    if(childpid==0){
        printf("%ld",(long)getpid());
    }
}
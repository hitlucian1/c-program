#include<stdio.h>
#include<unistd.h>
int main(){
    for(int i=0;i<3;i++){
    int pid=fork();
    if(pid>0){
        printf("parent process: %d\n",getpid());
        break;
    }
    else{
        printf("child process: %d\n",getpid());
    }}
    return 0;
}
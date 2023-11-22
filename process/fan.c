#include<stdio.h>
#include<unistd.h>
int main(){
    printf("parent: %d\n",getpid());
    for(int i=0;i<3;i++){
        int pid=fork();
        if(pid==-1){
            printf("error");
            return 1;
        }
        else if(pid==0){
            printf("child %d from parent: %d\n",getpid(),getppid());
        }
    }
    return 0;
}
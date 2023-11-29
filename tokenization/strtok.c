#include<stdio.h>
#include<string.h>
int main(){
    char str[]="ITER-IBCS-SUM-IDS";
    char *token;
    token=strtok(str,"-");
    while(token!=NULL){
        printf("token=%s\n",token);
        token=strtok(NULL,"-");
    }
    return 0;
}
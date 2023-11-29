#include<stdio.h>
#include<string.h>
char **makeargv(char *);
int main(){
    char s[]="this is a string";
    char **myargv;
    myargv=makeargv(s);
    if(myargv==NULL){
        fprintf(stderr,"failed to construct an argument array\n");

    }
    else{
        
    }
}
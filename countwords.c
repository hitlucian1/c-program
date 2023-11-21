#include<stdio.h>
#include<stdlib.h>
void main(){
    char str[200];
    printf("enter string:");
    fgets(str,200,stdin);
    int word=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '&&str[i+1]!=' '){
            word++;
        }
    }
    printf("%d",word);
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    int length;
    int position;
    char s[100],sub[100];
    fgets(s,100,stdin);
    scanf("%d%d",&length,&position);
    int count;
    int e;
    while( e<length){
        sub[e]=s[position+e-1];
        e++;
    }
    sub[e]='\0';
    printf("%s",sub);
}
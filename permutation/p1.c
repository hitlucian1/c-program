#include<stdio.h>
#include<string.h>
void swap(char*a,char*b){
    char c = *a;
    *a=*b;
    *a=c;
   
}
void permutation(char*str,int s,int e){
    if(s==e){
        printf("%s\n",str);
    }
    for(int i=s;i<=e;i++){
        swap(str+s,str+i);
        permutation(str,s + 1,e);
        swap(str+s,str+i);
    }
}
void main(){
    char str[]="ABC";
    permutation(str,0,2);
}
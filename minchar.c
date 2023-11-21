//print the character having max frequency and no. of times it appears in the string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char str[200];
    printf("enter the string:");
    fgets(str,200,stdin);
    int freq[256]={0};
    int max=-1;
    int len=strlen(str);
    char result;
    for(int i=0;i<len;i++){
        freq[str[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>max){
            max=freq[str[i]];
            result=str[i];
        }
    }
    
    printf("%c%d",result ,max);
}
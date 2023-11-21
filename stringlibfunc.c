#include<stdio.h>
#include<string.h>
void main(){
    char str1[20];
    char str2[20];
    int n;
   // scanf("%s",str1);
    //scanf("%s",str2);
    //scanf("%d",&n);
    //int a=strcmp(str1,str2);
    //int b=strncmp(str1,str2,n);
    //printf("%d",b);
    //int c=strcasecmp(str1,str2);
    //printf("%d",c);
    

   // char*result=strstr(str1,str2);
    //printf("%ld",result-str1);
    char str3[]="goodbye";
    char ch='m';
    char *ptr1=strchr(str3,ch);
    printf("%s",ptr1);
}
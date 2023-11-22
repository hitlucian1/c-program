#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;
};
void main(){
    typedef struct student st;
    st s1;
    scanf("%s",s1.name);
    scanf("%d",&s1.roll);
    scanf("%f",&s1.marks);
    printf("%s,%d,%f",s1.name,s1.roll,s1.marks);
}
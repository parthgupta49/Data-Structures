#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student
{
    int roll;
    char name[25];
    char class[10];
}s1;

void main(){
    // s1 = {12,"Steve","BCA"};

    // struct student s2 = {12,"sdfkjhd","sdfkjs"};
    // printf("%d %s %s",s2.roll,s2.name,s2.class);
    s1.roll = 123;
    strcpy(s1.class,"BCA");
    // strcpy(s1.name,"steve");
    printf("jdfk");
}
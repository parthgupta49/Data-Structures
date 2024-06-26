#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student
{
    int roll;
    char name[25];
    char className[10];
}s1[52];

int main(){
    // s1 = {12,"Steve","BCA"};

    // struct student s2 = {12,"sdfkjhd","sdfkjs"};
    // printf("%d %s %s",s2.roll,s2.name,s2.class);
    // s1.roll = 123;
    // s1.className = "BCA";

    for (int i = 0; i < 5; i++)
    {
        printf("Enter for student %d :",i+1);
        printf("Roll : ");
        scanf("%d",&s1[i].roll);
        scanf("%s",s1[i].className);
        // printf("roll no of student %d is : %d",i+1,s1[i].roll);
        printf("classname of student %d is : %s",i+1,s1[i].className);
    }


    
    return 0;
}
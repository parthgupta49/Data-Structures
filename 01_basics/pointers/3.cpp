#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <iostream>
using namespace std;
struct student
{
    int roll;
    int id;
    char arr[25];
};

int main(){
    
    int arr[] = {12,3,4,45,4,2};
    int a = 3;
    int *p = &a;
    struct student s1 = {1,211,"Steve"};

    struct student *pointer = &s1;
    // printf("%s",pointer->arr);
    // int size = sizeof(p)/sizeof(p[0]);
    // printf("%d size of the pointer : %d",sizeof(p),sizeof(s1));
    // printf("Size of struct student: %zu\n", sizeof(s1));
    // printf("Offset of arr: %zu\n", offsetof(struct student, arr));
    // printf("Offset of roll: %zu\n", offsetof(struct student, roll));
    // printf("Offset of id: %zu\n", offsetof(struct student, id));
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d\n",p[i]);
    // }

    student *pointer2 = new student;

    strcpy(pointer2->arr,"SMith");
    // pointer2->arr = "Smith";

    cout << pointer2->arr;

    // struct student *pointer2 = (struct student *) malloc (sizeof (struct student));
    // strcpy(pointer2->arr,"SMith");
    // pointer2->id = 23;
    // (*pointer2).id = 45;

    // printf("%d",pointer2->id);
    return 0;
}
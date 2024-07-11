#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *a;
    int size;
    int length;
};


int main()
{
    struct array one;
    printf("size :");
    scanf("%d",&one.size);
    one.a = (int*)malloc(sizeof(int) * one.size);
}
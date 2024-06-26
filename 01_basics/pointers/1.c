#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    char a = 'd';
    char *p = &a;
    printf("%c\n",a);
    // printf("%d",p);
    
    p = (char *) malloc (sizeof(char) * 10);

    // for (int i = 0; i < 10; i++)
    // {
    //     p[i] = 'A';
    // }

    // strcpy(p,"ateve");
    p = "Steve";

    // for (int i = 0; i < 5; i++)
    // {
    //     // scanf('%c',)
    //     printf("%c",p[i]);
    // }

    printf("%s",p);
    int size = 10;
    int *arr = (int *) malloc (sizeof(int) * size);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 21;
    }
    for (int i = 0; i < 10; i++)
    {
    printf("%d\n",arr[i]);
    }
    

}
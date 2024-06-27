#include <stdio.h>
#include <stdlib.h>

int * allocateInHeap(int n){

    int * p = (int *) malloc (sizeof(int) * n);
    return p;
}

void s(int arr[]){
    int length = sizeof(arr)/sizeof(int);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

void main(){
    
    // int *p = allocateInHeap(10);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n",p[i]);
    // }
    // printf("%d",p[11]);

    int arr[] = {2343,44,5324,32};
    s(arr);
}
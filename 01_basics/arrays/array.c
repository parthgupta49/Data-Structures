#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int var = 10;
    int A[var];
    A[0] = 2;
    int size = sizeof(A)/sizeof(A[0]);
    // for (int i = 0; i < size; i++)
    // {
    // printf("Give value for %d index",i+1);
    // scanf("%d",&A[i]);
    // }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",A[i]);
        /* code */
    }
    // if we give the size of the array and initialize it partially then the remaining indexes will be 0 but if there exists variable length array as above then the remaining indexes will be garbage value
    
    return 0;
}

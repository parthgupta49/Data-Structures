#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[10] = {1,23,4,5};
    for( int i : arr ){
        printf ("%d\n",i);
    }

    return 0;
}

#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int * p = new (nothrow) int[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
       cout << p[i] <<" ";
    }

    free(p);
    cout << p <<endl ;
    p = NULL;
    cout << p;
    


    

    return 0;
}

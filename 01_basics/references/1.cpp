
#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // Reference (only in C++)
    // has to be initialized at the time of declaration
    // it is A variable used as an alias of another variable
    // WILL make sense when we'll learn more about it in parameter passing
    int a = 3;
    int *p = &a;

    int &r = *p;
    
    // ++r;
    cout << a <<endl << ++r;

    // a++;
    // cout << endl <<a;
    return 0;
}

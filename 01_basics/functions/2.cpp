#include <iostream>
#include <stdio.h>
using namespace std;


void swap (int &a,int *b){
    // printf("hdfuhkhhg%d",*a);
    cout << a <<endl;
    int temp = a;
    a = *b ;
    *b = temp;
}
int main() {

    int a,b;
    a = 10;
    b = 20;
    int &x = a;
    int &y = b;

    // cout << x;
    // cout << &x<<endl;
    // cout << &a;

    cout <<"Before swapping" << "value of a : " << a << endl << "value of b : " << b << endl;
    swap(x,&y); // how the hell this worked;
    // swap(a,b);
    cout <<"After swapping"<< "value of a : " << a << endl << "value of b : " << b;
    return 0;
}
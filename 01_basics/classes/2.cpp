#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct Rectangle
{
    int l;
    int b;

    int area(){
        return l*b;
    }
};



int main(){
    Rectangle r = {12,10};

    std::cout << r.area();

    return 0;
}
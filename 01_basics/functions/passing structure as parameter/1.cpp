#include <iostream>

struct stud
{
    int data;
    int roll;
};

struct stud * allocateInHeap() {
    struct stud * myVar = new stud;
    myVar->data = 123;
    myVar->roll = 123443;

    return myVar;
}

int main()
{

    struct stud *new1 = allocateInHeap();
    std::cout << new1->data;
    
    return 0;
}

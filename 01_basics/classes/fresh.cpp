#include<iostream>

using namespace std;

class Rectangle
{
private:
    int l;
    int b;
public:
    Rectangle(){
        l = 1;
        b = 1;
    };
    Rectangle(int l,int b);
    int area();

    ~Rectangle();
};

Rectangle::Rectangle(int l,int b)
{
    this->l = l;
    this->b = b;
}

int Rectangle::area(){
    return l * b;
}

Rectangle::~Rectangle()
{
    cout << "Your dad is executing.. ";
}



int main(int argc, char const *argv[])
{

    Rectangle r(10,15);
    Rectangle r1;

    cout << r.area() << endl;
    cout << r1.area() << endl;

    
    return 0;
}

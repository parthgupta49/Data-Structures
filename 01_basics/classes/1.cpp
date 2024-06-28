
#include <iostream>
#include <stdlib.h>
using namespace std;


// class Rectangle
// {
// private:
//     int l;
//     int b;
// public:
//     Rectangle(int l,int b){
//         this -> l = l;
//         this -> b = b;
//     }

//     int area (){
//         return l * b;
//     }
// };


struct Square{
    int side;
};

int area(Square s){
    return s.side * s.side;
}

int main()
{
    
    // Rectangle r(10,120);
    // int area = r.area();
    // cout << area;

    Square s = {12};
    int area1 = area(s);
    cout << area1;
    return 0;
}

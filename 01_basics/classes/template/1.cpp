#include <iostream>

using namespace std;


template <class T> class Rectangle {
    private : 
        T len;
        T bred;
    public : 
        Rectangle();
        Rectangle(T len,T bre);
        T area();
        T perimeter();
};

template <class T> T Rectangle<T>::area(){
    return len * bred;
}

template <class T>
T Rectangle<T> :: perimeter(){
    return 2 * (len + bred);
}

template <class T>
Rectangle<T>::Rectangle(){
    len = 1;
    bred = 1;
}

template <class T>
Rectangle<T> :: Rectangle(T len, T bre){
    this->len = len;
    this->bred = bre;
}



int main(int argc, char const *argv[])
{

    Rectangle <int> r;
    cout << r.area();

    return 0;
}

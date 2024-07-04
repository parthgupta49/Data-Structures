#include <iostream>

using namespace std;

template <class T>
class rectangle
{
private:
	T length,breadth;

public:
	rectangle();
	rectangle(T length,T breadth);

	T area();
	T perimeter();
};

template <class T>
rectangle<T>::rectangle()
{
	length = 1;
	breadth = 1;
}

template <class T>
rectangle<T>::rectangle(T length,T breadth)
{
	this->length = length;
	this->breadth = breadth;
}

template <class T>
T rectangle<T>::area()
{
	return length * breadth;
}

template <class T>
T rectangle<T>::perimeter()
{
	return 2 * (length + breadth);
}

int main()
{
	rectangle<int> rectangle1(20,30);
	rectangle<float> rectangle2(20.5,15.8888);

	cout << "area of rectangle 1 " << rectangle1.area() << "\n" << "area of rectangle2 " << rectangle2.area() << endl;
	cout << "perimeter of rectangle 1 " << rectangle1.perimeter() << "\n" << "perimeter of rectangle2 " << rectangle2.perimeter() << endl;

	return 0;
}
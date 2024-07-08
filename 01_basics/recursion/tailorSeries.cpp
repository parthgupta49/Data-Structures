#include <iostream>

using namespace std;

float tailorSeries(float x,float n){
    static float p = 1;
    static float f = 1;

    if (n==0)
        return 1;
    float value = tailorSeries(x,n-1);
    cout << "The value is : " << value << endl;
    p = p * x;
    f = f * n;
    cout << "value of p : " << p  << endl << "value of f : " << f << endl;
    return value + (p/f);
}

int main()
{   
    cout << tailorSeries(2,4) << endl;
    
    return 0;
}

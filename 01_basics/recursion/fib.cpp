#include <iostream>

using namespace std;

int fib(int n)
{   
    static int * arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    
    
    if(n < 2)
    {   
        arr[n] = n;
        return arr[n];
    }
    else
    {   
        if (arr[n-1] == -1){
        return fib(n - 2) + fib(n - 1);
        }
        else{
            cout << arr[n-1] << endl;
            return arr[n-1];
        }
    }
}

int main()
{
    /* code */
    cout << fib(6) << endl;
    return 0;
}

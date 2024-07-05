#include <stdio.h>
int myFun(int);
int fact (int);
int myPower (int m,int n);
int fun(int n)
{
    static int result;

    if(n > 0)
    {
        result += fun(n - 1);
    }
    else
    {
        return result;
    }
}

unsigned long long int optimisedPow(unsigned long long int m,unsigned long long int n);

int power(int val,int exp)
{

    if(val == 0)
    {
        return 0;
    }

    if(exp == 0)
    {
        return 1;
    }
    else
    {
        return power(val,(exp - 1)) * val;
    }
}

int main()
{
    // printf("%d",fun(6));
    // printf("%d",myFun(5));
    //printf("%d",fact(5));
    // printf("%d",power(2,3));
    // printf("%d",myPower(2,5));
    printf("%llu",optimisedPow(2,63));
    // 9223372036854775808 - 92lakh lakh crore

    return 0;
}

int myFun(int n){
    if (n<1)
        return 0;
    return myFun(n-1) + n;
}

int fact (int n){
    if (n < 2)
        return 1;
    return fact (n-1) * n;
}
int myPower (int m,int n){
    if (n < 2) {
        return m;
    }
    return myPower(m,n-1) * m;
}


unsigned long long int optimisedPow(unsigned long long int m,unsigned long long int n) {
    if (n < 2)
        return m;
    if (n % 2 == 0){
        return optimisedPow(m*m,n/2);
    }
    else
    {
        return optimisedPow(m*m,(n-1)/2) * m;
    }
    
}
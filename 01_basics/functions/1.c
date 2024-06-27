
#include <stdio.h>
#include <stdlib.h>


int sum(int,int); //declaration of the function


void main(){
    
    int a = 12;
    int b = 12;
    int c = sum (a,b);
    printf("%d",c);
} 

// definition of the function
int sum (int x,int y){ //sum (int ,int ) => signature of this function

    return x+y;
}
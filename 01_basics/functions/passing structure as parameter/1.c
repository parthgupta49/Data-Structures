#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stud
{
    int id;
    int roll;
    char name[25];
};

void function(struct stud ptr){
    ptr.roll = 234;
    ptr.id = 2345;
   

    strcpy( ptr.name, "hello");

    printf("%s",ptr.name);

}




void main(){
    struct stud s1 = {1,237,"Parth Gupta"};
    printf("%d %d %s",s1.id,s1.roll,s1.name);
    function(s1);
    printf("\n%d %d %s",s1.id,s1.roll,s1.name);
}
// program for concept of structure

#include<stdio.h>

struct Demo
{
    char ch;            // 1 
    int i;              // 4 
    float f;            // 4    
    double d;           // 8

};


int main()

{
    struct Demo obj1;       // first object
    struct Demo obj2;       // second object
    struct Demo obj3;       // third object 

    obj1.ch = 'A';
    obj1.i = 50;
    obj1.f = 45.4545;
    obj1.d = 62.626262; 

    obj2.ch = 'B';
    obj2.i = 65;
    obj2.f = 56.5656;
    obj2.d = 74.756465;

    printf("\n datatype under first objects \n");
    printf("\n %c", obj1.ch);
    printf("\n %d", obj1.i);
    printf("\n %f", obj1.f);
    printf("\n %Lf \n", obj1.d);

    
    printf("\n datatype under second objects \n");
    printf("\n %c", obj2.ch);
    printf("\n %d", obj2.i);
    printf("\n %f", obj2.f);
    printf("\n %Lf \n", obj2.d);


    return 0;
}
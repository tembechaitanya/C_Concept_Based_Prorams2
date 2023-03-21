// concept of pointers in structure

#include<stdio.h>

struct pointer
{
    
    int *ap;
    float *bp;

};

int main()

{
    struct pointer obj1;
    
    int a = 50;
    float b = 45.45;

    obj1.ap = &a;
    obj1.bp = &b;

    printf("\n pointer objects are \n");

    printf("\n value of variable a is : %d ", a);
    printf("\n value of variable b is : %f ", b);
    printf("\n address holding pointer ap is : %p ", obj1.ap);
    printf("\n address holding pointer bp is : %p ", obj1.bp);

    return 0;
}

//program for local and globle variable scope

#include<stdio.h>

int a=50;

int demo()
{
    int b=60;
    printf("\n value for local scope variable under demo function is %d ", b);
    return 0;
}

int main()
{
    printf("\n value for global scope variable is %d ", a);
    demo();
    return 0;
}
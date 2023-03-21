#include<stdio.h>

int main()
{
    int i;
    char ch;
    float f;
    double d;

    int size = 0;
    size = sizeof(i) + sizeof(ch) + sizeof(f) + sizeof(d);

    printf("\n size of all datatyapes is %d bytes \n", size);

    return 0;
}
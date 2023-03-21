// pointer in structure

#include<stdio.h>

struct Demo
{
    char *chp;
    int *ip;
    float *fp;
};

int main()
{
    char ch = 'A';
    int i = 10;
    float f = 11.11;

    struct Demo obj1;

    obj1.chp = &ch;
    obj1.ip = &i;
    obj1.fp = &f;

    printf("chp pointer holds address of ch is %d \n", obj1.chp);
    printf("ip pointer holds address of i is %d \n", obj1.ip);
    printf("fp pointer holds address of f is %d \n", obj1.fp);



    return 0;
}
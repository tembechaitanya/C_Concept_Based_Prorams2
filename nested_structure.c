#include<stdio.h>

struct Hello
{   
    int hNo1;
    int hNo2;
};

struct Demo
{
    int dNo1;
    int dNo2;

    struct Hello hobj;
};

int main()
{
    struct Demo dobj;

    dobj.dNo1 = 10;
    dobj.dNo2 = 20;

    dobj.hobj.hNo1 = 30;
    dobj.hobj.hNo2 = 40;

    printf("value of dNo1 is %d \n", dobj.dNo1);
    printf("value of dNo2 is %d \n", dobj.dNo2);
    printf("value of hNo1 is %d \n", dobj.hobj.hNo1);
    printf("value of hNo2 is %d \n", dobj.hobj.hNo2);

    return 0;
}
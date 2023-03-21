// pointer pointes to object of structure

#include<stdio.h>

struct Demo
{
    int i;
    float f;
    char ch;    
    double d;

};

int main()
{
    struct Demo Dobj;
    struct Demo *DPTR = NULL;

    DPTR = &Dobj;

    DPTR->i = 10;
    DPTR->f = 11.11;
    DPTR->ch = 'A';
    DPTR->d = 121.121;

    printf("size of Dobj is %d bytes \n", sizeof(Dobj));
    printf("size of DPTR is %d bytes \n", sizeof(DPTR));

    printf("variable i having value of %d \n", DPTR->i);
    printf("variable f having value of %f \n", DPTR->f);
    printf("variable ch having value of %c \n", DPTR->ch);
    printf("variable d having value of %lf \n", DPTR->d);

    return 0;
}
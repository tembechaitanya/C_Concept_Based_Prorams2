// self referncial structure, pointer to self structure means linked list

#include<stdio.h>

struct Demo
{
    int no;
    struct Demo *next;
};

int main()
{
    struct Demo Dobj1;
    struct Demo Dobj2;
    struct Demo Dobj3;

    Dobj1.no = 10;
    Dobj2.no = 20;
    Dobj3.no = 30;

    Dobj1.next = &Dobj2;
    Dobj2.next = &Dobj3;
    Dobj3.next = NULL;

    printf("Address of Dobj1 is %d is \n", &Dobj1);
    printf("Address of Dobj2 is %d is \n", &Dobj2);
    printf("Address of Dobj3 is %d is \n", &Dobj3);

    printf("\nDobj1 having address %d holds address of Dobj2 which is %d \n", &Dobj1, Dobj1.next);
    printf("\nDobj2 having address %d holds address of Dobj3 which is %d \n", &Dobj2, Dobj2.next);
    printf("\nDobj3 having address %d holds address of nothing %d \n", &Dobj3, Dobj3.next);

    return 0;
}
//pointer is defined as a varible which holds the address

#include<stdio.h>
int main()
{
    int i = 5;
    int *ip = &i;
    int *qp = &i;
    int arr[3] = {10,20,30};
    int *parr = &arr[0];


    printf("\n value of variable i is : %d \n", i);
    printf("\n address of variable i is : %d \n", &i);
    printf("\n pointer ip holds address of variable i which is : %d \n", ip);
    printf("\n value in pointer i is : %d \n", *ip);

    printf("\n pointer qp holds address of variable i which is : %d \n", qp);
    printf("\n value in pointer i is : %d \n", qp);

    printf("\n pointer parr holds address of arr[0] which is : %d \n", parr);

    printf("\n size of pointer ip is : %d bytes \n", sizeof(ip));
    printf("\n size of varible i is : %d bytes \n", sizeof(i));

    return 0;
}
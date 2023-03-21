// concept related to array in struture
 
#include<stdio.h>

struct COA
{
    int arr[4];
    float brr[2];

};

int main()
{
    struct COA obj1;

    obj1.arr[0] = 10;
    obj1.arr[1] = 20;
    obj1.arr[2] = 30;
    obj1.arr[3] = 40;


    struct COA obj2;

    obj2.brr[0] = 25.2455;
    obj2.brr[1] = 85.9023;


    printf("\n obj1 of structure COA are : \n");
    printf("\n %d ", obj1.arr[0]);
    printf("\n %d ", obj1.arr[1]);
    printf("\n %d ", obj1.arr[2]);
    printf("\n %d \n", obj1.arr[3]);

    printf("\n obj2 of structure COA are : \n");
    printf("\n %f ", obj2.brr[0]);
    printf("\n %f \n", obj2.brr[1]);

    return 0;
}
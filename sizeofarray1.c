//keep in mind that sizeof empty array of any datatype is 0 bytes.


#include<stdio.h>
int main()
{
    int arr[4] = {10,20,30,40};
    char crr[4] = {'A','b','c','d'};
    float frr[4] = {55.55, 66.66, 77.77, 88.88}; 
    double drr[4] = {11.11, 22.22, 33.33, 44.44};

    int irr[] = {};
    float frr1[] = {};
    char crr1[] = {};
    double drr1[] = {};

    

    printf("Size of integer array is %d bytes\n", sizeof(arr));
    printf("Elements in array are:  \n %d \n %d \n %d \n %d \n\n ",arr[0], arr[1], arr[2], arr[3]);

    printf("Size of character array is %d bytes\n ", sizeof(crr));
    printf("Elements in array are:  \n %c \n %c \n %c \n %c \n\n ",crr[0], crr[1], crr[2], crr[3]);

    printf("Size of double array is %d bytes\n ", sizeof(drr));
    printf("Elements in array are:  \n %lf \n %lf \n %lf \n %lf \n\n ",drr[0], drr[1], drr[2], drr[3]);

    printf("Size of float array is %d bytes\n ", sizeof(frr));
    printf("Elements in array are:  \n %f \n %f \n %f \n %f \n\n ",frr[0], frr[1], frr[2], frr[3]);

   printf("Size of integer array is %d bytes\n", sizeof(irr));
   printf("Size of float array is %d bytes\n", sizeof(frr1));
   printf("Size of charcter array is %d bytes\n", sizeof(crr1));
   printf("Size of double array is %d bytes\n", sizeof(drr1));
    


    return 0;
}
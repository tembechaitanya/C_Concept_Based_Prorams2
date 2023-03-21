// Array of structre (structure + structure + structure +..... = arrays of structure...)

#include<stdio.h>

struct Demo 
{
	int arr[3];
	float  brr[3];
};

int main()
{
	struct Demo obj1;
	struct Demo obj2;
	
	obj1.arr[0] = 10;
	obj1.arr[1] = 20;
	obj1.arr[2] = 30;
	
	obj2.brr[0] = 25.25;
	obj2.brr[1] = 35.35;
	obj2.brr[2] = 45.45;
	
	printf("\n %d", obj1.arr[0]);
	printf("\n %d", obj1.arr[1]);
	printf("\n %d", obj1.arr[2]);
	
	printf("\n %f", obj2.brr[0]);
	printf("\n %f", obj2.brr[1]);
	printf("\n %f", obj2.brr[2]);
	
	
		
	return 0;
}

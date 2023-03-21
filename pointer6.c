// pointer to an array 

#include<stdio.h>

int main()
{
	int arr[4] = {10,20,30,40};
	
	int *ptr0 = &arr[0];
	int *ptr1 = &arr[1];
	int *ptr2 = &arr[2];
	int *ptr3 = &arr[3];
	
	printf("%d \n", arr[0]);
	printf("%d \n", arr[1]);
	printf("%d \n", arr[2]);
	printf("%d \n\n", arr[3]);
	
	printf("%d \n", ptr0);
	printf("%d \n", ptr1);
	printf("%d \n", ptr2);
	printf("%d \n\n", ptr3);
	
	printf("%d \n", *ptr0);
	printf("%d \n", *ptr1);
	printf("%d \n", *ptr2);
	printf("%d \n\n", *ptr3);
	
	
	return 0;
}

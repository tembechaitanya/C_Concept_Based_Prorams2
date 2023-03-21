// pointers to arrays elements

#include<stdio.h>

int main()
{
	int arr[3] = {10,20,30};
	
	int *ptr1 = &(arr[0]);
	int *ptr2 = &(arr[1]);
	int *ptr3 = &(arr[2]);
	

	
	printf("\n ptr1 holding element %d", ptr1);
	printf("\n ptr2 holding element %d", ptr2);
	printf("\n ptr3 holding element %d", ptr3);	
	
	printf("\n ptr1 holding element %d", *ptr1);
	printf("\n ptr2 holding element %d", *ptr2);
	printf("\n ptr3 holding element %d", *ptr3);	
	
	return 0;
}

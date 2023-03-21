// program for sizeof opreator and address opreator

#include<stdio.h>

int main()

{
	char ch = 'A';
	int i = 50;
	float f = 100.256;
	double d = 564.1234;
	int arr[5]= {20,25,30};
	
	/*printf("\n size of character is %d ", sizeof(ch));
	printf("\n size of integer is %d  ", sizeof(i));
	printf("\n size of floating character is %u ", sizeof(f));
	printf("\n size of double is %u ", sizeof(d));
	printf("\n size of array is %d \n", sizeof(arr));
	
	
	printf("\n address of character is %p ",&ch);
	printf("\n address of interger is %p ",&i);
	printf("\n address of float is %p ", &f);
	printf("\n address of double is %p ", &d);
	printf("\n address of array is %p \n", &arr);*/
	
	printf("\n position of 1st number in array is %d ", arr[0]);
	printf("\n position of 2nd number in array is %d ", arr[1]);
	printf("\n position of 3rd number in array is %d ", arr[2]);
	printf("\n position of 4th number in array is %d ", arr[3]);
	printf("\n position of 5th number in array is %d \n\n\n", arr[4]);	
	
	printf("\n address of array is %p \n", &arr[2]);
	
	return 0;
}  

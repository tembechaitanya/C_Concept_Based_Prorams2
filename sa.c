//size and address of array

#include<stdio.h>

int main()
{
	int arr[5] = {10,20,30,40,50};
	char ch = 'a';
	char *cp = &ch;
	
	printf("\n The base address of array is : %p ", &arr);
	printf("\n The size of array is : %d bytes ", sizeof(arr));
	printf("\n The size of single element in array is : %d bytes ", sizeof(arr[3]));
	printf("\n The address of third element array is : %p ", &arr[2]);
	printf("\n The size of pointer is : %d bytes ", sizeof(cp));
	printf("\n The value stored in cp pointer is  : %c ", *cp);
//	printf("\n The value stored in cp pointer is  : %c \n", cp);  		//only cp is having no meaning
	
	
	
	return 0;
}

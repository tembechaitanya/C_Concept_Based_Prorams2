//pointer sizes in different datatypes

#include<stdio.h>

int main()
{
	char *cptr;
	int *iptr;
	float *fptr;
	
	printf("\n size of character pointer is %d bytes\n", sizeof(cptr));
	
	printf("\n size of interger pointer is %d bytes\n", sizeof(iptr));
	
	printf("\n size of float pointer is %d bytes\n", sizeof(fptr));
	
	return 0;
}

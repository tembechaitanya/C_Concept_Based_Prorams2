// array representation

#include<stdio.h>

int main()
{
	float a = 5.2356;
	float *ptr = &a;
	float **ptr1 = &ptr;
	
	printf("\n value of variable a is %f ", a);
	printf("\n address of that variable a is %p ", &*ptr);
	printf("\n address of pointer ptr variable is %p \n", &**ptr1);
	
	return 0;
}

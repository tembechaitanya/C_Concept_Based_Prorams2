// program of function pointer

#include<stdio.h>

int fun()
{
	
	printf("your are in main function \n");

	
}

 
int main()
{
	fun();
	
	void(*fptr)();
	
	fptr = fun();
	
	fptr();
	
	return 0;
}

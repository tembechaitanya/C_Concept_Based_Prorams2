//EXTERNAL LINKAGE PROGRAM

#include<stdio.h>

int main()
{
	extern int a;
	printf("\n In main function value of a is %d ",a);
	
	fun();
	return 0;
 } 

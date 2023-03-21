// storage class

#include<stdio.h>

int a=10;		//global variable

void fun()
{
	auto int b=20;	//local variable
	register int d=40;
	static int e=50;
	
	b++;
	d++;
	e++;
	
	printf("\n value of auto variable is %d ",b);
	printf("\n memory for auto variable b is %p ",&b);
	
	printf("\n value of register variable is %d ",d);
//	printf("\n memory for variable d is %p ",&d);
	
	printf("\n value of static variable is %d ",e);
	printf("\n memory for static variable e is %p \n",&e);
	
	
}

int main()
{
	int c=30;	//local variable
	
	printf("\n first function call \n");
	fun();		// function call
	
	printf("\n second function call \n");
	fun();		// function call
	
	printf("\n third function call \n");
	fun();		// function call
	
	return 0;
}


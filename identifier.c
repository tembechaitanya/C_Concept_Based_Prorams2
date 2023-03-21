// An identifier using outside its scope

#include<stdio.h>

int main()
{
	
	auto int a=20;
	
	printf("\n The value in main function of a is %d ", a);
	
 	bank();
	
	//getch();
	return 0;
 } 
 
int bank()
{
	auto int b=20;
	printf("\n give me %d dollars from bank function ",b);
	return b;
}


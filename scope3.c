//Multiple declaratons in different scopes

#include<stdio.h>

extern int a=0;

int main()
{
	auto float b=1.50;
	printf("the value of a is %d ",a);
	printf("\n the value of b is %f ",b);
	getch();
	return 0;
}

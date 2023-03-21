// we can't create object of same structure inside structure

#include<stdio.h>

struct Demo
{
	int no;
	
	struct Demo *ptr;   //not posible
};

int main()
{
	
	return 0;
}

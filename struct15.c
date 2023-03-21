// program for pointers in structure

#include<stdio.h>

struct Demo{
	
	int *ip;
	float *fp;
	
};

int main()
{
	struct Demo D;
	
	int i = 50;
	float f = 45.55;
	
	D.ip = &i;
	D.fp = &f;
	
	printf("\n address of variable i %p ", D.ip);
	printf("\n address of variable f %p \n", D.fp);
	
	return 0;
}

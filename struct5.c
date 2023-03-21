// pointer inside structure

#include<stdio.h>

struct Demo 
{
	int *ip;
	float *fp;
			
}obj1;

int main()
{
	int i = 50;
	float f = 60;
	
	obj1.ip = &i;
	obj1.fp = &f;
	
	printf("\n Data inside main function \n");
	printf("\n %d ", i);
	printf("\n %f \n", f);
	
	printf("\n pointer address are \n ");
	printf("\n %p ", obj1.ip);
	printf("\n %p \n", obj1.fp);
	
	return 0;
}

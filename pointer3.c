// nto check garbage values

#include<stdio.h>

int main()
{
	int i = 10;
	
	int *p = &i;
	int **q = &p;
	int ***r = &q;
	
	printf("\n value of i is : %d ",i);
	
	printf("\n Address of i is : %d ", &i);
	printf("\n value in pointer p is %d ", p);
	
	printf("\n Address of q is : %d ", &p);
	printf("\n value in pointer q is %d ", q);
	
	printf("\n Address of r is : %d ", &q);
	printf("\n value in pointer r is %d \n", r);
	
	
	
	
//	printf("\n  ", &q);
	
	
	
	
		
	return 0;
}

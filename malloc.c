


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Arr[5];
	int *p = NULL;
	
	p = (int *)malloc(sizeof(int)*5);
	
	free(p);
	
	return 0;
}

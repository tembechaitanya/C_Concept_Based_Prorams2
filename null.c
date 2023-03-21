// program for void pointer

#include<stdio.h>

int main()
{
	char ch = 'a';
	int i = 11;
	float f = 12.23;
	double d = 8989.2525;
	
	char *chp = &ch;
	int *ip = &i;
	float *fp = &f;
	double *dp = &d;
	
	void *vp = &ip;
	
	printf("\n data refer by void pointer is : %c ", *(char *)vp);
	printf("\n data refer by void pointer is : %d ", *(int *)vp);
	
	
	return 0;
}

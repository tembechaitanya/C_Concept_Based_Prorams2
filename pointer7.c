/* generic pointer : generic pointer is  a pointer which 
points to any data type. If we create a void pointer then
it can hold the address of character, integer, float, double */

#include <stdio.h>
int main()
{
	char ch = 'A';
	int i = 1212;
	float f = 56.321;
	double d = 456.13245;
	
	char *chptr = &ch;
	int *iptr = &i;
	float *fptr = &f;
	double *dptr = &d;
	   
	//void *vp = &ch;
	//void *vp = &i;
	//void *vp = &f;
	void *vp = &d;
	
	//printf("data refer by void pointer is %c \n", *(char *)vp);
	
	//printf("data refer by void pointer is %d \n", *(int *)vp);	
	
	//printf("data refer by void pointer is %f \n", *(float *)vp);
	
	printf("data reer by void pointer is %Lf ", *(double *)vp);
	
	
	return 0;
}

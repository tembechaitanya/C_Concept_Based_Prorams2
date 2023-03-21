// program for structure object pointer

#include<stdio.h>

struct Demo {
	
	float Marks;
	int Age;
	char Div;
	
};

int main()
{
	struct Demo D;
	struct Demo *DP = NULL;
	
	DP = &D;
	
	DP->Div = 'A';
	DP->Age = 21;
	DP->Marks = 96.36;
	
	printf("\n Division is %c ", DP->Div);
	printf("\n Age is %d ", DP->Age);
	printf("\n Marks is %f \n", DP->Marks);
	
	return 0;
}

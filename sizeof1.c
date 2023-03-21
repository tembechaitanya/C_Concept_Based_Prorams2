// size of operator Assignment 9, Que 5

#include<stdio.h>

int main()
{
	double no = 3.14;
	double *a = &no;
	double **b = &a;
	double ***c = &b;
	double ****d = &c;
	
	printf("\n %d bytes \n",sizeof(**d));
	printf("\n %d bytes \n",sizeof(****d));
	printf("\n %d bytes \n",sizeof(*a));
	printf("\n %d bytes \n",sizeof(***c));
	printf("\n %d bytes \n",sizeof(**c));
	
	
	return 0;
}

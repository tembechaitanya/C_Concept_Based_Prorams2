// size of and address of opretor 

#include<stdio.h>

int main()
{
	char ch = 'A';
	int i=11;
	float f= 3.14;
	double d = 9.55565;
	
	
	
	printf("\n size of character %d ", sizeof(ch));
	printf("\n size of int is %d ", sizeof(i));
	printf("\n size of float %u ", sizeof(f));
	printf("\n size of double is %u \n", sizeof(d));
	
	/*printf("\n address is %f " , &f);
	printf("\n address is %i " , &i);
	printf("\n address is %lf ", &d);
	
	printf("\n ch is ", ch);*/
	
	return 0;
}


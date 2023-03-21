// nested structure : structure under structure

#include<stdio.h>

struct Hello{
	
	int c;
	float d;
	struct Demo
	{
		int A;
		int B;
		
	}dobj;
};

int main()
{	
	struct Hello hobj;
	
	hobj.c = 12;
	hobj.d = 15.15;
	
	hobj.dobj.A = 16;
	hobj.dobj.B = 17;
	
	printf("\n %d", hobj.c);
	printf("\n %f", hobj.d);
	printf("\n %d", hobj.dobj.A);
	printf("\n %d", hobj.dobj.B);
	
	return 0;
}

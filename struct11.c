//nested structure means structure inside structure

#include<stdio.h>

struct Demo{
	
	int i;
	int b;
	
};

struct Hello{
	
	int c;
	float f;
	struct Demo dobj;
	
};

int main()
{
	struct Hello hobj;
	
	hobj.c = 10;
	hobj.f = 12.1212;
	
	hobj.dobj.i = 30;
	hobj.dobj.b = 40;
	
	printf("\n %d ",hobj.dobj.i);
	printf("\n %d ",hobj.dobj.b);
	
	printf("\n %d ",hobj.c);
	printf("\n %f ",hobj.f);
	
	return 0;
}

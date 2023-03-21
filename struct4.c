// simple program for structure

#include<stdio.h>

struct Demo
{
	char ch;
	int i;
	float f;
	
}obj1, obj2;

int main()
{
	//struct Demo obj1;
	//struct Demo obj2;
	
	obj1.ch = 'C';
	obj1.i = 10;
	obj1.f = 23.23;
	
	obj2.ch = 'B';
	obj2.i = 20;
	obj2.f = 65.321;
	
	printf("\n In object_1 data is : \n");
	printf("\n %c ", obj1.ch);
	printf("\n %d ", obj1.i);
	printf("\n %f \n", obj1.f);
	
	printf("\n In object_2 data is : \n");
	printf("\n %c ", obj2.ch);
	printf("\n %d ", obj2.i);
	printf("\n %f \n", obj2.f);
	
	printf("\n Size of object_1 is %d bytes", sizeof(obj1));
	printf("\n Size of object_2 is %d bytes\n", sizeof(obj2));
	
	printf("\n Size of structure is %d bytes ", sizeof(struct Demo));
	
	return 0;
}

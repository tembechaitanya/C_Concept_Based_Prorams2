//self referencial pointer

#include<stdio.h>

struct Demo
{
	int no;
	struct Demo *next;
	
};

int main()
{
	struct Demo obj1;
	struct Demo obj2;
	struct Demo obj3;
	
	obj1.no = 10;
	obj2.no = 20;
	obj3.no = 30;
	
	obj1.next = &obj2;
	obj2.next = &obj3;
	obj3.next = NULL;
	
	printf("\n %p", obj1.next);
	printf("\n %p", obj2.next);
	printf("\n %p", obj3.next);
	
	return 0;
}

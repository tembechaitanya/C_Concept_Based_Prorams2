// pointer concept program

#include<stdio.h>

int main()
{
	int a = 50;
	int *p1 = &a;
	
//	int **p2 = &p1;
// 	int ***p3 = &p2;
	
	printf("\n Value of variable a is %d ", a);
	
	printf("\n Size of variable is %d ", sizeof(a));
	
	printf("\n Pointer *p1 holds address of variable a which is %p ", p1);  
	
	printf("\n size of pointer p1 is %d \n ", sizeof(*p1));
	
//	printf("\n Pointer **p2 holds address of variable *p1 which is %d ", &**p2);
//	printf("\n Pointer ***p3 holds address of variable *p1 which is %d ", &***p3);
//	printf("\n Pointer size of ***p3 is %d \n", sizeof(***p3));
	
	
	return 0;
}

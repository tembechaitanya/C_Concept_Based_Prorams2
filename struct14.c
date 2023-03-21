// program for thr structue of arrays

#include<stdio.h>

struct Demo{
	
	char c;
	int i;
	//float f;
	
};


int main()
{
	struct Demo Arr[3];
	struct Demo Brr[3];
	
	Arr[0].c = 'A';
	Arr[1].c = 'B';
	Arr[2].c = 'C';
	
	Arr[0].i = 10;
	Arr[1].i = 20;
	Arr[2].i = 30;
	
	Brr[0].c = 'D';
	Brr[1].c = 'E';
	Brr[2].c = 'F';
	
	Brr[0].i = 40;
	Brr[1].i = 50;
	Brr[2].i = 60;
	
	printf("\n The elements in Arr are : %c , %c , %c ", Arr[0].c , Arr[1].c, Arr[2].c);
	printf("\n The elements in Brr are : %d , %d , %d \n", Brr[0].i , Brr[1].i, Brr[2].i);
	
	
	
	return 0;
}

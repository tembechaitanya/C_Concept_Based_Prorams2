// program for concept of arrays in structure

#include<stdio.h>

struct Demo{
	
	char crr[3];
	int arr[3];
	float frr[3]; 
	
};

int main()
{
	struct Demo D1;
	
	D1.crr[0] = 'A';
	D1.crr[1] = 'B';
	D1.crr[2] = 'C';
	
	D1.arr[0] = 10;
	D1.arr[1] = 20;
	D1.arr[2] = 30;
	
	D1.frr[0] = 25.25;
	D1.frr[1] = 35.35;
	D1.frr[2] = 45.45;
	
	printf("\n character are : %c , %c , %c ", D1.crr[0], D1.crr[1], D1.crr[2]);
	printf("\n integers are : %d , %d , %d ", D1.arr[0], D1.arr[1], D1.arr[2]);
	printf("\n floats are : %Lf , %Lf , %Lf ", D1.frr[0], D1.frr[1], D1.frr[2]);	
	
	
	return 0;
}

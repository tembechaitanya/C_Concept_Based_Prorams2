// Inside structure array

#include<stdio.h>

struct Hello 
{
	int arr[2];
	float brr[2];
	
}obj;

int main()
{
	 obj.arr[0] = 10;
	 obj.arr[1] = 20;
	
	 obj.brr[0] = 45.45;
	 obj.brr[1] = 55.23;
	
	printf("\n Values inside interger object are : %d & %d ", obj.arr[0], obj.arr[1]);
	printf("\n Values inside float object are : %f & %f ", obj.brr[0], obj.brr[1]);
	
		
	
	return 0;
}

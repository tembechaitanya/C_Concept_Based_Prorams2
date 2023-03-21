
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[5];
	int *p = NULL;
	
	p = (int *)malloc(sizeof(int) * 5);
	{
		printf("\n memory allocated sucessful \n");
	}
	
	free(p);
	{
		printf("\n memory deallocated sucessfully \n");
		
	}
	
	return 0;
	return 0;
}

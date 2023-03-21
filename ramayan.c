// program related to pointers

#include<stdio.h>

int main()
{
	int seeta = 100;
	int *ram = &seeta;
	int **hanuman = &ram;
	int ***pawan = &hanuman;
	
	
	printf("\n address of seeta is : %d ", &seeta);				// 500
	
	printf("\n Inside ram there is seeta's address is : %d ", &ram); // 500
	
	printf("\n Inside hanuman there is Ram's address is : %d ", &hanuman); // 800
	
	printf("\n Inside pawandev there is Hanuman's address is : %d ", &pawan); // 900
	
	printf("\n value of seeta is : %d ", seeta);	//100
	
	printf("\n value inside ram is : %d ", ram);	//500	
	
	printf("\n value inside hanuman is : %d ", hanuman);	//800
	
	printf("\n value inside pawandev is : %d \n", pawan );	//900
	
	
	
	return 0;
}

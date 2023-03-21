//program related to memory
//aakhi mhais palana : static 
//roj doodhachi pishavi aanane : dynamic


#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)

int main()
{
	int Arr[5];		//static memory allocation
	
	int *p = NULL;
	
	p = (int *)malloc(sizeof(int)*5);
	
	//use the memory
	
	
	
	
	
	free(p);
	
	//code
	
	
	
	
	
	return 0;	//memory of Arr deallocated at this point
}


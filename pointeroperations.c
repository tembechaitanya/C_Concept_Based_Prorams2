//pointers and its operations 


#include<stdio.h>

int main()
{
	int no = 11;
	int *p = &no;			//suppose address is  of var no is 100
	

	printf("\nvalude of no is %d \n", no);				//11
	printf("address store in pointer id %ld \n", p);	//100	
	printf("value in p is %d ",*p);						//11
	no++;
	printf("\n %d", no);		//12
	p++;
	printf("\n %ld", p);		//108
	printf("\n\nvalue in p is %d ", *p++);	
	
	
	
	
		
	
	return 0;
}



#include<stdio.h>

int fun(){
	
	int a = 5;
	a++;
	printf("a is %d ",a);
	
}

int main(){
	
	for (int i = 0; i < 5 ; i++)
	{	
		printf("\n");
		fun();
		printf("\n");
	}	


	
	return 0;
}

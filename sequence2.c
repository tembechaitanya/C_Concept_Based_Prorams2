// addition


#include<stdio.h>

int Addition(int No1, int No2)
{
	int Ans = 0;
	Ans = No1 + No2;
	return Ans;
		
}


int main(int val1, int val2)
{
	int val3 = 0;
	
	printf("\n enter 2 interger numbers for addition \n");
	scanf("%d%d",&val1,&val2);
	
	val3 = Addition(val1, val2);
	
	printf("\n Addition of 2 integers is %d \n", val3);
	
	val3 = Addition(val1, val2);
	
	
	
	return 0;
}

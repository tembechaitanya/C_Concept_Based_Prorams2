//program related to storage class 

#include<stdio.h>

int multiplication(int No1, int No2)
{
	int Ans=0;
	Ans= No1*No2;
	return Ans;
}

int main()
{
	int A=10, B=11;
	int Ret=0;
	
	printf("\n inside main function..\n");
	
	Ret=multiplication(A,B);
	
	printf(" \n Multiplicaton is : %d ", Ret);
	return 0;
}

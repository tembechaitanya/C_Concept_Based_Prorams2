//program of functions which is write outside main function 

#include<stdio.h>

int Addition() //addition function
{
	int a,b;
	
	printf("\n ------------------------------------------------- \n ");
	
	printf("\n provide two numbers for addition \n ");
	scanf("%d%d",&a,&b);
	printf("\n Addition of two numbers is %d \n", a+b);
	printf("\n ------------------------------------------------- \n ");
	
}

int Substration() // substartion function
{
	int a,b;
	
	printf("\n provide two numbers for substration \n ");
	scanf("%d%d",&a,&b);
	printf("\n Substration for two numbers is %d \n", a-b);
	printf("\n ------------------------------------------------- \n ");
}

int Multiplication () // multiplication function
{
	int a,b;
	
	printf("\n provide two numbers for multipllication \n ");
	scanf("%d%d",&a,&b);
	printf("\n Multiplication for two numbers is %d \n", a*b);	
	printf("\n ------------------------------------------------- \n ");
	
}

int Divison() // division function
{
	int a,b;
	
//	printf("\n ------------------------------------------------- \n ");
	printf("\n provide two numbers for divison \n ");
	scanf("%d%d",&a,&b);
	printf("\n Divison for two numbers is %d ", a/b);
	printf("\n ------------------------------------------------- \n ");
	
}

int main()
{
	printf("\n Start of the program \n");
	
	Addition();
	Substration();
	Multiplication();
	Divison();
	
	printf("\n End of the program \n");
	
	return 0;
}

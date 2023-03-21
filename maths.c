// arthmatic equtions only in functions

#include<stdio.h>

int add(int a, int b)
{
	int c = 0;
	c = a + b;
	return c;
	
}

int sub(int a, int b)
{
	int c = 0;
	c = a - b;
	return c;
	
}

int mul(int a, int b)
{
	int c = 0;
	c = a * b;
	return c;
	
}

int div(int a, int b)
{
	int c = 0;
	c = a / b;
	return c;
	
}

int main(int x, int y)
{	
	int z = 0;
	
	printf("\n Program includes four basic equations, programs starts from here...\n\n");
	
	printf("\n Please provide two numbers for addition \n");
	scanf("%d%d",&x,&y);
	z = add(x,y);
	printf(" Additon of two numbers is %d \n \n", z);
	
	printf("\n Please provide two numbers for substraction \n");
	scanf("%d%d",&x,&y);
	z = sub(x,y);
	printf(" Substraction of two numbers is %d \n \n", z);
	
	printf("\n Please provide two numbers for multiplication \n");
	scanf("%d%d",&x,&y);
	z = mul(x,y);
	printf(" Multiplication of two numbers is %d \n \n", z);

	printf("\n Please provide two numbers for division \n");
	scanf("%d%d",&x,&y);
	z = div(x,y);
	printf(" Division of two numbers is %d \n ", z);	
	
	printf("\n Program ends here... Thank you... \n ");
	
	return 0;
}


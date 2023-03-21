// multiple definations in differnt scope

#include<stdio.h>

int a=10; // global variable
int b=20; // global variable

int main()
{
	printf("\n The value in global a & b is %d %d \n ",a,b);
	{
		auto int a=30; // first time declare variable in main with scope
		auto int b=40; // first time declare variable in main with scope
		{
			printf("\n The value are first time in a & b in main funstion is %d %d \n",a,b);
			
			auto int a=50; // second time declare variable in main with scope
			auto int b=60; // second time declare variable in main with scope
			{
				printf("\n The values are second time in a & b in main function is %d %d",a,b);
			}
		}
	}
	
	getch();
	return 0;
	
}

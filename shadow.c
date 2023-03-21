// shadowing and name resolution

#include<stdio.h>

int a=151;

int main()
{
	
	printf("\n value of a in first call is %d ",a);
	{
		auto int a=35;
		printf("\n value of a in second call is %d ",a);
		{
			auto float a=50.50;
			printf("\n value of a in third call is %f ",a);
		}
	}
	
	return 0;
 } 

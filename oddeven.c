// check whether no is even or odd by slection

#include<stdio.h>
#include<stdbool.h>		

bool CheckEven(int iNo)
{
	if((iNo % 2)==0)
	{
		return true;
		
	}
	
	else
	{
		return false;
		
	}
	
}

int main()
{
	int iValue = 0; bool bRet = false;
	
	printf("\n enter one number: \n ");
	scanf("%d",&iValue);
	
	bRet=CheckEven(iValue);
	if (bRet == true)
	{
		printf("\n even number");
		
	}
	else
	{
		printf("\n odd number");
	}
	
	return 0;
}

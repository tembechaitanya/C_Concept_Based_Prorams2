//selection program


#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
	
	if((iNo % 2) == 0)
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
	int iValue = 0;
	bool bRet = false;
	
	printf("\n enter one number \n ");
	scanf("%d", &iValue);
	
	bRet = CheckEven(iValue);
	if(bRet == true)
	{
		printf("\n Its even number \n");
	}
	else
	{
		printf("\n Its odd number \n");
	}
	
	return 0;
}

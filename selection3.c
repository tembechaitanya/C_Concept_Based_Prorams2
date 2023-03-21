// selection of if else

#include<stdio.h>
#include<stdbool.h>

bool checkEven(int iNo)
{
	if ((iNo % 2)==0) 
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
	int iVal = 0;
	bool bRet = false;
	
	printf("\n enter ineteger to check whether it is odd or even \n");
	scanf("%d", &iVal);
	
	bRet = checkEven(iVal);
	
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


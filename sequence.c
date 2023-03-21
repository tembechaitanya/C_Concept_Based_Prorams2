//sequence program

#include<stdio.h>

int Addition(float iNo1, float iNo2)
{
	
	float iAns = 0.0;
	iAns = iNo1 + iNo2;
	return iAns;
	
}


int main()
{
	
	float iValue1 = 0.0 , iValue2 = 0.0, iRet = 0.0;
	
	printf(" \n Enter first no : \n");
	scanf("%f" , &iValue1);
	
	printf(" \n Enter second no : \n");
	scanf("%f" , &iValue2);
	
	iRet = Addition(iValue1, iValue2);
	
	printf("\n Addition of two numbers is %f \n", iRet);
	
	return 0;
	
}

	
	
	


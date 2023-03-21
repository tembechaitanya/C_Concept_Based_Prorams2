// structure program for padding

#include<stdio.h>
#pragma pack(8)		// to save memory on RAM

struct demo{
	
	char ch;
	int i;
	float f1;
	float f2;
	
};

int main()
{
	struct demo obj1;
	
	printf("\n the size of object is %d \n", sizeof(obj1));
	
	return 0;
}

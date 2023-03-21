// pointer towards object using indirect accessing operator

#include<stdio.h>

struct student
{
	int marks;
	int age;
	char div;
	
};


int main()
{
	struct student obj;
	struct student *ptr = NULL;
	
	ptr = &obj;
	
	ptr->marks = 90;
	ptr->age = 21;
	ptr->div = 'b';
	
	printf("\n marks obtain is %d", ptr->marks);
	printf("\n age is %d", ptr->age);
	printf("\n division obtain is %c", ptr->div);
	
	return 0;
}

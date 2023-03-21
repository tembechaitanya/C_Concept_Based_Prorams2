// switch case program of selection

#include<stdio.h>

int main()
{
	int iToken = 0;
	
	printf("\n please provide token number ");
	scanf("%d", &iToken);
	
	switch(iToken)
	{
		case 1 :
			printf("\n Mulachi Chappal Ghavli");
			break;
		case 2 :
			printf("\n Porichi Chappal Ghavli");
			break;
		case 3:
			printf("\n Aiechi Chappal Ghavli");
			break;
		case 4 :
			printf("\n Bapachi Chappal Ghavli");
			break;
		default:
			printf("\n Gandu asla konata token nahi.. Bhosadichya pal ithun ");
			break;	
		
	}
	
	
	return 0;
}



// selection   

#include<stdio.h>

int main()
{
	char cToken = '\0';
	
	printf("\n Enter one division out of first four divisions in captial \n");
	scanf("%c", &cToken);
	
	switch(cToken)
	{
		case 'A':
			printf("\n Kas ky patil\n");
			break;
			
		case 'B':
			printf("\n Ya basa Anna \n");
			break;
			
		case 'C':
			printf("\n Gap re jabrya \n");
			break;
			
		case 'D':
			printf("\n Ae Kaltondya \n");
			break;
			
		default:
			printf("\n Sukalichya var ky lihalay nit vach ki...\n");
			break;
			
		
	}

	return 0;
}

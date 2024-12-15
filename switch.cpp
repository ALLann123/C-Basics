#include <stdio.h>
#include <ctype.h>   //used for string conversitions such as to uppercase or lowercase
int main()
{
	char grade;
	printf("Course Reccomendation\n");
	printf("\nEnter student grade: ");
	scanf("%c",&grade);
	
	grade=toupper(grade);    //used to convert user input to uppercased
	//start switch case
	switch(grade)
	{
		case 'A':
			printf("Selected for Bsc.Medicine");
			break;
		case 'B':
			printf("Selected for Bsc.Computer Science");
			break;
		case 'C':
			printf("Selected for Dip.Electrical Engineering");
			break;
		case 'D':
			printf("Do Certifications i.e CCNA");
			break;
		case 'E':
			printf("Advised to repeat!!");
			break;
		default:
			printf("Invalid Grade!!");
	}
	return 0;
}

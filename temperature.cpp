#include <stdio.h>
#include <ctype.h>

int main()
{
	char unit;
	float temp;
	
	printf("Is the temperature in (F) or (C)>> ");
	scanf("%c",&unit);
	
	unit=toupper(unit);
	if(unit == 'C')
	{
		printf("\nEnter temperature in celcius: ");
		scanf("%f",&temp);
		printf("Converting to Farenheit\n");
		temp=(temp*9/5)+32;
		printf("Temp in Fareinheit>> %f",temp);
	}
	else if(unit == 'F')
	{
		printf("\nEnter temperature in Farenheit: ");
		scanf("%f",&temp);
		printf("Converting to celcius\n");
		temp = ((temp-32)*5)/9;
		printf("Temp in celcius>> %f",temp);
	}
	else
	{
		printf("Invalid Input!!");
	}
	return 0;
}

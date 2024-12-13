#include <stdio.h>
int main()
{
	//store with three items
	float soap=30.66;
	float bread=67.99;
	float rice=110.11;
	
	//display the items
	printf("Soap at $%f", soap); //to display float we use %f
	printf("\nBread at $%f", bread);
	printf("\nRice at $%f", rice);
	float total;
	total=soap+bread+rice;
	printf("\nTotal price=$%f",total);
	return 0;
}

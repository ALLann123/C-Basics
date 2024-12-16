#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//pseudo random numbers-Set of values that are statistically random
	//use current time to generate a random seed
	srand(time(0));
	
	//invoke the rand function
	
	int number1=(rand()%6)+1;
	int number2=(rand()%6)+1;
	int number3 =(rand()%6)+1;
	

	printf("%d\n", number1);
	printf("%d\n", number2);
	printf("%d\n", number3);
	
	
	
	return 0;
}


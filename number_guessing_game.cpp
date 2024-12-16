#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	const int MIN=1;
	const int MAX=100;
	
	int guess;
	int guesses;
	int answer;
	
	//generate seed using current time
	srand(time(0));
	
	//use this to generate some random numbers 
	answer=(rand()%MAX)+MIN;
	//printf("%d", answer);
	
	do
	{
		printf("Enter a guess>> ");
		scanf("%d",&guess);
		if(guess>answer)
		{
			printf("To high!!\n");
		}
		else if(guess<answer)
		{
			printf("Too low!!\n");
		}
		else
		{
			printf("**CORRECT**\n");
		}
		guesses++;
	}while(guess!=answer);
	
	printf("*************\n");
	printf("answer:%d\n", answer);
	printf("guesses:%d\n", guesses);
	return 0;
}

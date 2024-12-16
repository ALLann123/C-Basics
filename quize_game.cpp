#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char questions[][100]={"1.What year did C language debut?:", "2.Who is the C cretor?:", "3. What is the predecessor of C?:"};
	char options[][100]={"A.1966", "B.1977","C.1975", "A.Ritchie","B.Tesla","C.John","A.Objective C","B.B","C.Assembly"};
	
	char answers[3]={'B','A','B'};
	int score=0;
	
	int numberOfQuestions=sizeof(questions)/sizeof(questions[0]);
	
	printf("--Quize Game--\n");
	
	for(int i=0;i<numberOfQuestions;i++)
	{
		printf("*****************\n");
		printf("%s\n", questions[i]);
		
		for(int j=(i*3);j<(i*3)+3;j++)
		{
			printf("%s\n", options[j]);
		}
		
		char guess;
		printf("guess: ");
		scanf("%c",&guess);
		scanf("%c");  //clear input buffer
		guess = toupper(guess);
		
		if(guess==answers[i])
		{
			printf("Correct!!\n");
			score++;
		}
		else
		{
			printf("Wrong\n");
		}
		
	}
	
	printf("FINAL SCORE: %d/%d\n", score,numberOfQuestions);
	return 0;
}

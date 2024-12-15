#include <stdio.h>
int main()
{
	char action;
	double num1, num2, results;
	
	printf("Enter the operation to be performed[+,-,/,*]: ");
	scanf("%c",& action);
	

	
	switch(action)
	{
		case '+':
			printf("Enter first number>> ");
			scanf("%lf",&num1);
			printf("Enter second number>> ");
			scanf("%lf",&num2);
			results=num1+num2;
			printf("Results= %lf",results);
			break;
		case '-':
			printf("Enter first number>> ");
			scanf("%lf",&num1);
			printf("Enter second number>> ");
			scanf("%lf",&num2);
			results=num1-num2;
			printf("Results= %lf",results);
			break;
		case '/':
			printf("Enter first number>> ");
			scanf("%lf",&num1);
			printf("Enter second number>> ");
			scanf("%lf",&num2);
			results=num1/num2;
			printf("Results= %lf",results);
			break;
		case '*':
			printf("Enter first number>> ");
			scanf("%lf",&num1);
			printf("Enter second number>> ");
			scanf("%lf",&num2);
			results=num1*num2;
			printf("Results= %lf",results);
			break;
		default:
			printf("Invalid operations choose from [+,-,/,*]");
	}
	
	return 0;
}

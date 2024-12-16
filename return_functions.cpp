#include <stdio.h>

double square(double x)
{
	double results = x*x;
	return results;
}

int main()
{
	double num;
	printf("Enter a number: ");
	scanf("%lf",&num);
	
	double result=square(num);
	printf("\nThe square= %lf", result);
	return 0;
}

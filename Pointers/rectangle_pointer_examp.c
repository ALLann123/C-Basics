#include <stdio.h>
double my_rectangle(double *length, double *width);

int main()
{
	double l, w, a;
	
	printf("Enter the length>> ");
	scanf("%lf", &l);
	printf("Enter the width>> ");
	scanf("%lf",&w);
	
	a=my_rectangle(&l, &w);
	printf("The area is>> %.2lf", a);
	
	return 0;
}

double my_rectangle(double *length, double *width)
{
	double area;
	area=*length * *width;
	return area;
}

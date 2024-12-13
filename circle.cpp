#include <stdio.h>
int main()
{
	//calculate area and circumference of a circle
	const double PI=3.142;
	double radius;
	double area;
	double circumference;
	
	//get radius from user
	printf("Enter the radius>> ");
	scanf("%lf",&radius);
	
	//calculate area
	area=PI*radius*radius;
	printf("\nThe area is: %lf", area);
	
	//calculate circumference
	circumference=PI*(radius*2);
	printf("\nCircumference: %lf", circumference);
	return 0;
}

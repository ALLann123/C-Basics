#include <stdio.h>
int main()
{
	//calculate the area of a circle
	const float PI=3.142;  //the PI value is unchangeble during program execution
	float radius, area;
	radius=35;
	
	area=PI*radius*radius;
	printf("The Area is=%.2f", area);
	return 0;
}

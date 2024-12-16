#include <stdio.h>
int main()
{
	//arrays=data structures used to stored multiple elements of the same type under same name
	//create an array
	double prices[]={10,20,30,40,50};
	
	//array elements can be accessed using their index which starts from zero
	printf("Price is $%.2lf\n",prices[0]);
	printf("Price is $%.2lf\n",prices[1]);
	printf("Price is $%.2lf\n",prices[2]);
	return 0;
}

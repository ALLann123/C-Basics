#include <stdio.h>
int main()
{
	//arrays=data structures used to stored multiple elements of the same type under same name
	//create an array
	double prices[]={10,20,30,40,89,50,70,80};
	
	for(int i=0;i<sizeof(prices)/sizeof(prices[0]);i++)
	{
		printf("$%.2lf\n",prices[i]);
	}
	
	return 0;	
}
	

#include <stdio.h>
enum Day{sun=1,mon=2,tue=3,wed=4,thur=5,fri=6,sat=7};
int main()
{
	//enum makes code more readable
	//enum elements are constants
	//first value of enum will have a value of 1
	//the elements of it are treated as integers
	
	enum Day today=mon;
	//printf("%d",today);
	
	if(today==sun || today==sat)
	{
		printf("Its the weekend, party time!!\n");
	}
	else
	{
		printf("Get to WOrk!!!\n");
	}
	return 0;
}

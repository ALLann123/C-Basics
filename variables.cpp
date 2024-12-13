#include <stdio.h>
int main()
{
	//we declare a varible 
	int x;//variable declared is of integer data type
	x=123; //initialization
	
	int age=24;//stores integer values
	float average=9.34; //stores floating points i.e numbers with a decimal part
	char grade='C'; //stores a single character i.e C is not oop thus has no way of storing strings directly instead..
	char name[]="Allan"; //..we use an array to archive this
	
	//To display the variables
	printf("Student Age>> %d", age);
	printf("\nYou are %d years old", age);
	printf("\nThe student is called %s\n", name);
	printf("The student's Grade:%c\n", grade);
	printf("The average is %f",average);
	return 0;
}

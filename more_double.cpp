#include <stdio.h>
#include <stdbool.h> //import the file to work with booleans in C
int main()
{
	double salary; //another data type is double which stores large numbers
	salary=100000;
	printf("I earned= %lf", salary);
	
	bool e=true;
	printf("\n%d", e);
	char f=100; 
	unsigned char n=250;
	printf("\n %d", f);
	printf("\n %d", n);
	
	//more variables
	short int x=30000;   //2bytes
	unsigned short int y=65000;   //2bytes
	
	printf("\n %d", x);
	printf("\n %d", y);
	
	//to represent a really large integer use ..
	long long int num=1234567890902334212;
	//unsigned long int
	unsigned long long int num2=12345678901234567890; //stores large numbers
	printf("\n%lld",num);
	printf("\n%llu", num2);
	return 0;
}

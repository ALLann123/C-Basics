#include <stdio.h>
void my_age(int *pAge)
{
	printf("\n");
	printf("You Are %d years old", *pAge);
}
int main()
{
	int age=22;
	int *pAge=NULL; //its good practice to assign a pointer to a value of null
	pAge=&age;
	
	//create a pointer of the above variable
	//the above has a memory address(i) and a value
	// make sure the pointer is the same data type as the variable
	printf("Memory Address: %p\n", &age);  //now compare the memory address of the above variables
	printf("Memory Address: %p\n", pAge);
	
	printf("---------------------------\n");
	
	printf("Value of age: %d\n",age);
	printf("Value of stored age: %d\n", *pAge);   //deferencing
	
	printf("----------------------------\n");
	printf("The size of variable: %d bytes\n", sizeof(age));
	printf("Size of the pointer: %d bytes\n", sizeof(pAge));
	my_age(pAge);
	
	return 0;
}

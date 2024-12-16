#include <stdio.h>
void birthday(char name[], int age)
{
	printf("Happy birthday %s\n", name);
	printf("You are %d years old\n", age);
}

int main()
{
	char name[]="Eliot";
	int age=24;
	
	birthday(name,age);
	return 0;
	
}

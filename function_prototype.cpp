#include <stdio.h>
void greetings(char name[],int age);
int main()
{
	char name[12];
	int age;
	
	printf("Enter Name: ");
	scanf("%s",&name);
	
	printf("Enter the age>> ");
	scanf("%d",&age);
	
	greetings(name,age);
	return 0;
}

void greetings(char name[],int age)
{
	printf("Hello %s,", name);
	printf("\nYou are %d years old.", age);
}

#include <stdio.h>
int main()
{
	char name[5];
	
	printf("Enter name>>");
	       //for safety use  this instead fgets(name, 5, stdin);
	gets(name);
	//gets allows the user to insert even more characters than the one specified, allowing an attacker to perfom a buffer overflow attack
	
	printf("Name: %s", name);
	return 0;
}

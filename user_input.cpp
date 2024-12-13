#include <stdio.h>
int main()
{
	//get user input i.e username, AGe, other names
	char name[15];
	int age;
	char more_names[25];
	
	//get user input and save the input using scanf
	printf("Enter Username>> ");
	scanf("%s",&name);
	
	printf("\n How old are you?");
	scanf("%d",&age);
	
	//clear the input buffer
	while (getchar() != '\n');
	
	printf("\n");
	printf("Other Names>>");
	fgets(more_names,25,stdin);
	
	printf("\n");
	printf("Username:%s", name);
	printf("\nOther Names: %s", more_names);
	printf("\nAge: %d", age);

	return 0;
}

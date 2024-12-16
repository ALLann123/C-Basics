#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char name[25];
	printf("Whats your name? ");
	fgets(name,25,stdin);
	name[strcspn(name, "\n")] = '\0';
	
	while(strlen(name)==0)
	{
		printf("You did not enter your name!!\n");
		printf("Whats your name? ");
		fgets(name,25,stdin);
		name[strcspn(name, "\n")] = '\0';
	}
	printf("Hello %s\n", name);
	
	bool gameover=false;
	
	while(!gameover)
	{
		if(strcmp(name, "Allan") == 0) // Use strcmp for string comparison
		{
			printf("Target found>> %s",name);
			gameover=true;
		}
		
		
	}
	return 0;
}

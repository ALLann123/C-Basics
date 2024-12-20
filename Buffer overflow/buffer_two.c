#include <stdio.h>
#include <string.h>
int main()
{
	//write a simple appplication for checking password for access
	char password[10];
	
	printf("****[+]Welcome Own_the_Net*****\n");

	printf("---Starting Application----\n");
	printf("Enter Password: ");
	scanf("%s",&password);
	
	if(strcmp(password,"secret")==0)   //we are using string compare to check whether the password is similar to the word secret
	{
		printf("[+]Access granted\n");
		printf("*********************\n");
		printf("SHELL>> ");		
	}
	else{
		printf("Access denied!!\n");
		printf("User entered: %s",password);
	}
	return 0;
}

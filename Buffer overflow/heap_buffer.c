#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *buffer=malloc(10);
	char *string="AAAAAAAAAAAAAAAAAAAAAAA";
	strcpy(buffer,string);
	
	printf("Buffer Content: %s\n", buffer);
	free(buffer);
	return 0;
}

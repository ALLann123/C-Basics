#include <stdio.h>
int main()
{
	FILE *pF = fopen("C:\\Users\\user\\Desktop\\booty.txt", "r");
	
	
	printf("Memory address: %p\n", &pF);
	
	//CREATES A buffer to hold one line at a time
	char buffer[255];
	
	//to reead a single line of a file
	if(pF == NULL)
	{
		printf("Unable to open file!\n");
	}
	else
	{
		while(fgets(buffer, 255,pF) != NULL)
		{
			printf("%s",buffer);
		}
	}


	
	fclose(pF);
	return 0;
}

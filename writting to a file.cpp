#include <stdio.h>
int main()
{
	FILE *pF = fopen("C:\\Users\\user\\Desktop\\own_u.txt", "w");   //a mode can be used to add text to our file
	
	fprintf(pF, "Eliot Alderson is Mr.Robot");
	fclose(pF);
	
	return 0;
}

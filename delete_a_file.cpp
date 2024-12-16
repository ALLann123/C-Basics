#include <stdio.h>
int main()
{
	if(remove("C:\\Users\\user\\Desktop\\own_u.txt")==0)
	{
		printf("That file was successfully deleted");
	}
	else
	{
		printf("The File was NOT deleted");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	//create the array of strings
	char students[][10]={"Eliot","Jaba","Alvin","Mark"};
	
	//to change the value of an array element
	strcpy(students[0],"Mobley");
	//display the elements of the array
	for(int i=0;i<sizeof(students)/sizeof(students[0]);i++)
	{
		printf("%s\n", students[i]);
	}
	return 0;
}

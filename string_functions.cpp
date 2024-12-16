#include <stdio.h>
#include <string.h>

int main()
{
	char string1[]="Mr";
	char string2[]="Robot";
	
	strlwr(string1);  //converts the string to lowercase
	strupr(string1);  //converts a string to uppercase
	strcat(string1, string2); //append sting two to string one
	strcpy(string1, string2);  //copy string two to string one
	
	strset(string1, '?'); //set all characters of a string to a given character
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	//malloc is a function onthe heap used to request a block of data
	int *a=malloc(sizeof(int) * 10); //dynamically allocated array
	
	//set the data
	for(int i=0;i<10;i++)
	{
		a[i]=10-i;
	}
	
	//print the data
	
	for(int i=0;i<10;i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
		printf("\n");
	}
	
	printf("a: %p\n", a);
	return 0;
}

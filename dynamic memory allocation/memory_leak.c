#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void memory_hog(int size);

int main()
{
	bool gameover;
	gameover=true;
	while(gameover)
	{
		memory_hog(128000);
	}
	return 0;
}
//the function is going to allocate space onthe heap but its not going to free it

void memory_hog(int size)
{
	//malloc is a function onthe heap used to request a block of data
	int *a=malloc(size);
}


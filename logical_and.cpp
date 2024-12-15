#include <stdio.h>
#include <stdbool.h>

int main()
{
	float temp=24;
	bool sunny=true;
	
	if(temp>=0 && temp<=30 && sunny==1)
	{
		printf("The Weather is good");
	}
	else{
		printf("The Weather is bad");
	}
	return 0;
}

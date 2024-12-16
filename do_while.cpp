#include <stdio.h>
int main()
{
	int number;
	int sum;
	
	do
	{
		printf("Enter a number above 0>> ");
		scanf("%d",&number);
		if(number>0)
		{
			sum+=number;
		}
	}while(number>0);
	return 0;
}

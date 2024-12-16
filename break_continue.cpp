#include <stdio.h>
int main()
{
	for(int i=1;i<=20;i++)
	{
		if(i==13){
			continue;
		}
		printf("%d\n",i);
	}
	
	printf("-----------------------------------\n");
	for(int i=20;i>=10;i--)
	{
		if(i==14){
			printf("Found Target!!");
			break;
		}
		else{
			printf("%d\n",i);
		}
	}
	return 0;
}

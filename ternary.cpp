#include <stdio.h>

int find_max(int x, int y)
{
	return (x>y)?x:y;    //alternative for if..else statementsffds
}
int main()
{
	int max=find_max(90,5);
	printf("Big number>> %d", max);
	return 0;
}

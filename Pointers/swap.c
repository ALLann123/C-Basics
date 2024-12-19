#include <stdio.h>
void swap(int *num1, int *num2);

int main()
{
	int a, b;
	a=10;
	b=39;
	printf("a contains>> %d\n", a);
	printf("b contains>> %d\n", b);	
	
	printf("After Swap:\n");
	swap(&a, &b);
	printf("a contains>> %d\n", a);
	printf("b contains>> %d\n", b);	
}

void swap(int *num1, int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}

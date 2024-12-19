#include <stdio.h>
void change_val(int *nb);

int main()
{
	int nb;
	nb=42;
	//lets use pointers to change the value stored at that memory address
	change_val(&nb);
	//printf("%d\n",nb);  //the number displayed is 42 because the two variables have different memory addresses
	printf("%d\n",nb);
	
}

void change_val(int *footer)
{
	*footer=1337;
}

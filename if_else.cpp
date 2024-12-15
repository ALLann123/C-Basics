#include <stdio.h>
int main()
{
	//grade system
	int marks;
	
	printf("Enter Student Marks: ");
	scanf("%d",&marks);
	
	if(marks>=80 && marks<=100)
	{
		printf("Grade- A");
	}
	else if(marks>=70 && marks<80)
	{
		printf("Grade- B");
	}
	else if(marks>=60 && marks<70)
	{
		printf("Grade- C");
	}
	else if(marks>=50 && marks<60)
	{
		printf("Grade- D");
	}
	else if(marks>=0 && marks<50)
	{
		printf("Failed!!\tAdvised To repeat.");
	}
	else{
		printf("Invalid Marks");
	}
	return 0;
}

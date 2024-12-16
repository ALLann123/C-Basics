#include <stdio.h>
typedef struct
{
	char name[24];
	float gpa;
}stud;
int main()
{
	stud student1={"Allann",4.0};
	stud student2={"John",3.6};
	stud student3={"Mark",2.7};
	
	//now lets create an array of the elements above
	stud student[]={student1,student2,student3};
	
	for(int i=0;i<sizeof(student)/sizeof(student1);i++)
	{
		printf("%s\n",student[i].name);
		printf("%.2f\n",student[i].gpa);
		printf("*******************\n");
	}
	return 0;
}

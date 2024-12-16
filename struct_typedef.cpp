#include <stdio.h>

typedef struct
{
	char name[25];
	char password[11];
	int id;	
}user;
int main()
{
	user student1={"Alvin","monkey12", 123};
	user student2={"Messi","lion134",321};
	user student3={"Roro","impala987",427};
	
	printf("Name: %s\n",student1.name);
	printf("ID: %d\n",student1.id);
	printf("Password: %s\n",student1.password);
	
	printf("************\n");
	printf("Name: %s\n",student2.name);
	printf("ID: %d\n",student2.id);
	printf("Password: %s\n",student2.password);
	return 0;
}

#include <stdio.h>
int main()
{
	int num[2][3]; //the first element represents the rows while the second the columns
	
	//use a four loop to add values to the array
	    // Input values into the array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for num[%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}

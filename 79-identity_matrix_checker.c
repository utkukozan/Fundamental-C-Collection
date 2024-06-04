#include <stdio.h>
int main(void)
{
	int a[3][3], i, j, flag;
	
	printf("Input 9 integer: ");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("The matrix is: \n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{	
			if (a[i][j] == a[i+1][j+1])
				flag=1;
		}
	}
	
	if (flag==1)
		printf("The matrix is an identity matrix.");
	else
		printf("Not identity !");
		
	return(0);
}

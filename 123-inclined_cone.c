#include <stdio.h>
int main(void)
{
	int i,j,k;
	for (i=1;i<=6;i++)
	{
		for (k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}


/*
*
 **
  ***
   ****
	*****
	 ******  
*/
	 

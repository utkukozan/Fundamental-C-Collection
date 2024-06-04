#include <stdio.h>
int main(void)
{
	int i,k,j;
	for(i=1;i<=10;i++)
	{
		for(k=9;k>=i;k--)
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
	*******
   ********
 **********
***********	
*/


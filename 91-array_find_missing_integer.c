#include <stdio.h>
int main(void)
{
	int a[8],i,j,missing,flag;
	printf("Input 8 unique integer: ");
	for (i=0;i<8;i++)
		scanf("%d", &a[i]);
	
	for (j=1;j<=9;j++)
	{
		flag=0;
		for (i=0;i<8;i++)
			if (j == a[i])
				flag=1;
				
		if (flag == 0)
			missing = j;
	}
	printf("The missing integer is %d", missing);
	return(0);
}

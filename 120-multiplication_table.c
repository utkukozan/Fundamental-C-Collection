#include <stdio.h>
int main(void)
{
	int k,i;
	for (i=1;i<=10;i++)
	{
		printf("%d 's': ",i);
		for (k=1;k<=10;k++)
		{
		printf("%d ",i*k);
		}
		printf("\n");	
	}
}

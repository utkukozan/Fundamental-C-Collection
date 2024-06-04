#include <stdio.h>
int main(void)
{
	int i,k,n,a=1;
	for (i=1;i<=7;i++)
	{
		for (k=6;k>=i;k--)
		{
			printf(" ");
		}
		for (n=1;n<=a;n++)
		{
			printf("*");
		}
		a+=2;
		printf("\n");
	}
}


#include <stdio.h>
void f1(int [],int,int [],int [],int * ,int *);
int main(void)
{
	int n, a[30],even[30],odd[30],evensize=0,oddsize=0,i;
	printf("Input N (N<30): ");
	scanf("%d",&n);
	
	printf("Input %d integers : ",n);
	for (i=0;i<n;i++)
		scanf("%d", &a[i]);
	
	f1(a ,n,odd,even,&evensize,&oddsize);
	
	printf("Even numbers :");
	for (i=0;i<evensize;i++)
		printf("%d ", even[i]);
		
	printf("\nOdd numbers :");
	for (i=0;i<oddsize;i++)
		printf("%d ", odd[i]);
		
	return(0);	
}
void f1(int b[],int n,int odd[], int even[],int *oddsize, int *evensize)
{
	int j=0,i=0,k=0;
	for (j=0;j<n;j++)
	{
		if (b[j] % 2 == 1)
			odd[i++] = b[j];  	// ya da odd[(*oddsize)++] = b[j];
		else
			even[k++] = b[j];	// ya da even[(*evensize)++] = b[j];
	}
	
	*evensize = k;
	*oddsize = i;
}

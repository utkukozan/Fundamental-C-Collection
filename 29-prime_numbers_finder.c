#include <stdio.h>
int main (void)
{
    //This program prompts the user for a number and identifies prime numbers between 1 and n
    int number, n, i, count=0, k;
    
    printf("Please enter a number.\n");
    printf("This number will indicate how far the prime numbers selected will go starting from 1.\n");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d:\n", n);
    printf("____________________________\n");
    /* The operations after this point are related to finding prime numbers */
    for (i=2;i<n;i++)
    {
        for (k=2;k<i;k++)
        {
            if (i%k==0)
                count++;
        }
        if (count==0)
            printf("%d ",i);
        count=0;
    }
    return(0);
}

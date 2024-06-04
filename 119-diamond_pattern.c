#include <stdio.h>

int main(void)
{
    // INPUT SECTION
    
    int number, i, j, k, asteriskCount = 1;
    printf("Please enter a number between 1 and 4:\n(This number determines the number of rows in the top part of the diamond): \n");
    scanf("%d", &number);
    
    // TOP PART
    
    for (i = 1; i <= number; i++)
    {
        for (k = number - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= asteriskCount; j++)
        {
            printf("*");
        }
        asteriskCount += 2;
        printf("\n");
    }
    asteriskCount = j - 2;
    
    // BOTTOM PART
    
    for (i = 1; i <= number - 1; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (j = 1; j < asteriskCount; j++)
        {
            printf("*");
        }
        asteriskCount -= 2;
        printf("\n");
    }

    return 0;
}

/*
   *
  *** 
 *****
*******
 *****
  ***
   *
*/   

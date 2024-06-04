#include <stdio.h>

int main(void)
{
    // INPUT SECTION
    
    int i, k, n, a = 2, number;
    printf("Please enter a number. This number will determine the middle part of the pattern: ");
    scanf("%d", &number);
    
    // TOP PART
    
    for (i = 0; i <= number; i++)
    {
        for (n = number - 1; n >= i; n--)
        {
            printf(" ");
        }
        printf("/");
        for (k = 2; k < a; k++)
        {
            printf("*");
        }
        a += 2;
        printf("\\");
        printf("\n");
    }
    
    // BOTTOM PART
    
    a = k - 2;
    for (i = 0; i <= number; i++)
    {
        for (n = 0; n < i; n++)
        {
            printf(" ");
        }
        printf("\\");
        for (k = 1; k <= a; k++)
        {
            printf("*");
        }
        a -= 2;
        printf("/");
        printf("\n");
    }

    return 0;
}

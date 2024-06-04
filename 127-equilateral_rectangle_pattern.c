#include <stdio.h>
int main(void)
{
    char ch;
    int a, i, k, j, n = 1;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter the length of the sides of the equilateral rectangle: ");
    scanf("%d", &a);

    /* UPPER ROW */
    for (i = 1; i <= a; i++)
    {
        for (k = a; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= n; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
        n = n + 2;
    }
    /* LOWER ROW */
    n = j - 3;
    for (i = 1; i <= a; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= n; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
        n = n - 2;
    }
}

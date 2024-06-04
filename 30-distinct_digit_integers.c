/* Write a C program to find and output all 3-digit positive integers that
have "distinct digits".
Your program will also output  the number of those 3-digit integers on
the screen.

Sample Run:
All 3-digit distinct-digit integers: 102 103 104 .....
Number of 3-digit distinct-digit integers: ...
*/

#include <stdio.h>

int main(void)
{
    int x = 103, a, b, c, counter = 0;
    printf("All 3-digit distinct-digit integers: ");
    while (x < 1001)
    {
        a = (x / 1) % 10;
        b = (x / 10) % 10;
        c = (x / 100) % 10;
        if ((a == b || a == c) || (b == c || b == a) || (c == b || c == a))
            x++;
        else
        {
            printf("%d ", x);
            x++;
            counter++;
        }
    }
    printf("\nNumber of 3-digit distinct-digit integers: %d", counter);
    return 0;
}

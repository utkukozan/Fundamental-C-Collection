#include <stdio.h>

int main(void)
{
    /* 
    Let's examine the use of the ?: operator, which can be used as an if-else statement.
    */

    int x, y;
    printf("Please enter a value for x: ");
    scanf("%d", &x);

    y = x > 9 ? 100 : 200;
    printf("y = %d\n", y);

    // The above statement is equivalent to:
    // if (x > 9)
    //     y = 100;
    // else
    //     y = 200;

    /* 
    In summary:
    if can be used as '?'
    else can be used as ':'
    */

    return 0;
}

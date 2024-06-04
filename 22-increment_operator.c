#include <stdio.h>

int main(void)
{
    // Let's first demonstrate the difference between the pre-increment operator (++i) and the post-increment operator (i++).
    // Pre-increment operator (++i): Increases the variable immediately and then uses it.
    // Post-increment operator (i++): Uses the variable first and then increases it.
    
    // For example:
    int i = 5;
    printf("Initial value of i: %d\n", i);
    
    printf("With ++i: i = %d\n", ++i); // i is incremented first, then printed.

    i = 5;
    printf("Initial value of i: %d\n", i);
    printf("With i++: i = %d\n", i++); // The original value of i is printed, then incremented.
    printf("After i: i = %d\n", i); // Now i is incremented.

    return 0;
}

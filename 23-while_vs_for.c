#include <stdio.h>

int main()
{
    int counter = 1; // Initialize the counter to 1
    
    // Using a while loop to print numbers from 1 to 10
    while (counter <= 10)
    {
        printf("%d", counter);
        counter++; // Increment the counter after each print
    }
    
    printf("\n\n"); // Print two new lines for separation

    // Now, let's rewrite the above command using a for loop.
    // In a for loop: first, initialize the counter; then write the check condition; and then the update statement.
    for(counter = 1; counter <= 10; counter++) // Re-initialize counter for the for loop
    {
        printf("%d", counter); // Print numbers from 1 to 10
    }
    
    return 0;
}

#include <stdio.h>

int main(void)
{
    int NumberA, NumberB, NumberC, largest;
    printf("Please enter 3 numbers: ");
    scanf("%d %d %d", &NumberA, &NumberB, &NumberC);
    largest = NumberA; // Let's assume the first number is the largest.
    if (NumberB > largest)
        largest = NumberB;
    if (NumberC > largest)
        largest = NumberC;
    printf("The largest number is: %d", largest);
    return 0;
    
}
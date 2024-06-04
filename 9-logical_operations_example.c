#include <stdio.h>
#include <math.h>

int main(void)
{
    // Logical operators: && --> AND    || --> OR
    int trueVar = 1, falseVar = 0;
    // The value for true is 1, and the value for false is 0.
    
    // OR OPERATION:
    printf("  p    q     p OR q\n");
    printf("___________________\n");
    printf("%3d%5d%7d \n", trueVar, trueVar, trueVar || trueVar);
    printf("%3d%5d%7d \n", trueVar, falseVar, trueVar || falseVar);
    printf("%3d%5d%7d \n", falseVar, trueVar, falseVar || trueVar);
    printf("%3d%5d%7d \n", falseVar, falseVar, falseVar || falseVar);
    
    // AND OPERATION:
    printf("\n__________________________________");
    printf("\n\n  p    q     p AND q\n");
    printf("___________________\n");
    printf("%3d%5d%7d \n", trueVar, trueVar, trueVar && trueVar);
    printf("%3d%5d%7d \n", trueVar, falseVar, trueVar && falseVar);
    printf("%3d%5d%7d \n", falseVar, trueVar, falseVar && trueVar);
    printf("%3d%5d%7d \n", falseVar, falseVar, falseVar && falseVar);
    
    // The meaning of 3, 5, and 7 after the % signs is to adjust the spacing. They are optional.
    return(0);
}

#include <stdio.h>
#include <math.h>

int main(void)
{
    float short_side, long_side, area, perimeter;
    printf("Welcome.\nPlease enter the short and long sides of the rectangle for which you want to calculate the area and perimeter.");
    printf("Please enter the short side first: ");
    scanf("%f", &short_side);
    printf("Short side is %.1f, now please enter the long side: ", short_side);
    scanf("%f", &long_side);
    printf("Long side is %.1f, calculating area and perimeter...", long_side);
    area = short_side * long_side;
    perimeter = 2 * (short_side + long_side);
    printf("\nArea is %.1f and Perimeter is %.1f", area, perimeter);
    return(0);
}
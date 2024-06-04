#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    float a, b, c, delta;
    printf("Welcome to the Root Finder.");
    printf("\nPlease enter the equation in the form of ax^2 + bx + c");
    printf("\nFirst, enter the value of a: ");
    scanf("%f", &a);
    printf("Now, enter the value of b:");
    scanf("%f", &b);
    printf("Finally, enter the value of c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;
    float d = (-b - sqrt(delta)) / (2 * a);
    float g = (-b + sqrt(delta)) / (2 * a);

    if (delta > 0)
    {
        d = (-b - sqrt(delta)) / (2 * a); 
        g = (-b + sqrt(delta)) / (2 * a);
        printf("The roots of this equation are = %f and %f", d, g);
    }
    else if (delta < 0)
    {
        printf("The equation has no real roots.");
    }
    else if (delta == 0)
    {
        d = (-b - sqrt(delta)) / (2 * a);
        g = (-b + sqrt(delta)) / (2 * a); 
        printf("The equation has two equal roots: %f and %f", d, g);
    }

    return 0;
}

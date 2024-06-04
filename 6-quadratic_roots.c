#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    int a, b, c, delta;
    printf("Welcome to the root finder."); 
    printf("\nPlease enter the equation in the form ax^2 + bx + c");
    printf("\nFirst, enter the value of a: ");
    scanf("%d", &a);
    printf("Now, enter the value of b: ");
    scanf("%d", &b);
    printf("Finally, enter the value of c: ");
    scanf("%d", &c);
    delta = b * b - 4 * a * c;
    float d = (float)(-b - sqrt(delta)) / (2 * a);  // (float) converts the result to a real number.
    float g = (float)(-b + sqrt(delta)) / (2 * a);
    printf("The roots of this equation are = %f and %f", d, g);
}

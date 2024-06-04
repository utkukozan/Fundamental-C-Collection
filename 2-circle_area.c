#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.14  /* Defines the value of Pi */
int main (void)
{
    double radius, area; /* Defines variables with data types like float, double, int, char. Radius and area could have been written on separate lines */
    printf("Enter the radius: ");
    scanf("%lf", &radius); /* We use %lf because we used double. For int, we would use %d. %lf transfers the value to the radius variable. That's why & is used. */
    area = PI * radius * radius;
    printf("Area = %f", area); /* We use the area constant to fill the %f variable. The constants after the comma are passed into %f in order. */
    return(0);
}

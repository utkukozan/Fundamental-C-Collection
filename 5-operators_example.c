#include <stdio.h>
int main(void)
{
    int a = 1;
    printf("%.1d", a); 
    double b = 6 % 4;     // The "%" operator is the modulus operator. It finds the remainder of the division.
    printf("\n%f", b);
    // Other operators are as follows: + addition, - subtraction, * multiplication, / division.
    // Division of integers always yields an integer result. Therefore, real numbers should be used instead of integers.
    double c = 6 / 4;
    printf("\n%f", c);   // This will only give the integer part of the division. The result is 1.
    double d = 6.0 / 4.0;
    printf("\n%f", d);  // This will give the result as a real number. The result is 1.5.
}

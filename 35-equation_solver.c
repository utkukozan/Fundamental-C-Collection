// EQUATION: 1/x^2 + 3/x^4 + 5/x^6 + 7/x^8 + ... + 2n-1/x^2n
#include <stdio.h>
#include <math.h>

float calculateEquation(int, float);

int main(void)
{
    int n;
    float x, result;
    printf("Equation is 1/x^2 + 3/x^4 + 5/x^6 + 7/x^8 + ... + 2n-1/x^2n\n");
    printf("Please enter a value for n: ");
    scanf("%d", &n);

    printf("Please enter a value for x: ");
    scanf("%f", &x);

    result = calculateEquation(n, x);

    printf("Result = %f\n", result);

    return 0;
}

float calculateEquation(int a, float b)
{
    float result = 0;
    int i;

    for (i = 1; i <= 2 * a - 1; i += 2)
    {
        result += (i / pow(b, i + 1));
    }

    return result;
}

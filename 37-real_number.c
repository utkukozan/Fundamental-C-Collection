#include <stdio.h>
#include <math.h>

int countDigits(int num)
{
    int count = 0;

    while (num > 0)
    {
        count++;
        num /= 10;
    }

    return count;
}

double realNumber(int x, int y)
{
    double result;
    result = x + y / pow(10, countDigits(y));
    return result;
}

int main(void)
{
    int a, b;

    do
    {
        printf("Please enter numbers a and b (The decimal number will be 'a.b'): ");
        scanf("%d%d", &a, &b);

        if (a > 0 && b > 0)
        {
            printf("Real number: %f\n", realNumber(a, b));
        }
    } while (a > 0 && b > 0);

    return 0;
}

#include <stdio.h>

int isDivisible(int, int);
int isPrime(int);

int main(void)
{
    int i, number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Prime factors of the number: ");
    for (i = 2; number > 0; ++i)
    {
        if (isPrime(i) == 1 && isDivisible(number, i) == 1)
        {
            printf("%3d", i);
            number = number / i;
            --i;
        }
    }

    return 0;
}

int isPrime(int num)
{
    int i;

    for (i = num - 1; i > 1; --i)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int isDivisible(int x, int y)
{
    if (x % y == 0)
        return 1;
    else
        return 0;
}

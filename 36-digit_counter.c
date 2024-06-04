#include <stdio.h>

int countDigits(int);

int main(void)
{
    int num, digitCount;

    do
    {
        printf("Please enter a number: (Enter a negative number to exit) ");
        scanf("%d", &num);

        if (num >= 0)
        {
            digitCount = countDigits(num);
            printf("Number of digits: %d\n", digitCount);
        }
    } while (num >= 0);

    return 0;
}

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

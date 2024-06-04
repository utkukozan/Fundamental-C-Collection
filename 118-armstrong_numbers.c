// An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits.
// For example: 371 = 3^3 + 7^3 + 1^3
// Program to find Armstrong numbers between 100 and 999
#include <stdio.h>

int main(void)
{
    int num, digit, sum = 0;

    // Loop through numbers from 100 to 999
    for (num = 100; num <= 999; num++)
    {		
        int temp = num;

        // Calculate the sum of cubes of digits
        while (temp > 0)
        {
            digit = temp % 10;
            sum += (digit * digit * digit);
            temp /= 10;
        }	

        // Check if the number is Armstrong
        if (sum == num)
            printf("%d ", num);

        sum = 0; // Reset sum for next number
    }

    return 0;
}
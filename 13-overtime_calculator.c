#include <stdio.h>

int main(void)
{
    int hours;
    printf("Hello, welcome to the Overtime Calculator.\n");
    printf("Overtime hours and rate table is as follows:\n\n");
    printf("______________________________________________\n");
    printf("0-10 hours     10-20 hours     Above 20 hours\n");
    printf("   $5               $3                  $2\n");
    printf("______________________________________________\n");
    printf("Note: Rates will be calculated per hour.\n");
    printf("Please enter the number of hours worked:\n");
    scanf("%d", &hours);
    
    if (hours <= 10) 
    {
        printf("Payment = $%d", hours * 5);
    }
    else if (hours > 10 && hours <= 20) 
    {
        printf("Payment = $%d", 10 * 5 + (hours - 10) * 3);
    }
    else if (hours > 20)
    {
        printf("Payment = $%d", 10 * 5 + 10 * 3 + (hours - 20) * 2);
    }
    
    return 0;
}

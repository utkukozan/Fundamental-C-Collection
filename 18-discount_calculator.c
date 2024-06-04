#include <stdio.h>
#include <math.h>
int main(void)
{
    float amount, discount_price;
    printf("Welcome,\nTo calculate the discount on your shopping, please enter the amount you spent: ");
    scanf("%f", &amount);
    
    if (amount >= 0 && amount <= 100)
    {
        printf("You have earned a '4 percent' discount.\n");
        discount_price = amount - ((amount * 4) / 100);
        printf("The amount you need to pay = %.2f", discount_price);
    }
    else if (amount >= 101 && amount <= 250)
    {
        printf("You have earned '5 percent' discount for up to 100 TL and '7 percent' for the remaining amount.\n");
        discount_price = amount - (((100 * 5) / 100) + (amount - 100) * 7 / 100);
        printf("The amount you need to pay = %.2f", discount_price);
    }
    else if (amount > 250)
    {
        printf("You have earned '6 percent' discount for up to 100 TL, '8 percent' for the amount between 100-250 TL, and '10 percent' for the remaining amount.\n");
        discount_price = amount - (((100 * 6) / 100) + (250 - 100) * 8 / 100 + (amount - 250) * 10 / 100);
        printf("The amount you need to pay = %.2f", discount_price);
    }
    
    return 0;
}

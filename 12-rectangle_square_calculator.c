#include <stdio.h>

int main(void)
{
    double side1, side2, area, perimeter;
    char ch;
    printf("Welcome. This program calculates the area and perimeter of a rectangle or square.\n");
    printf("Please enter the geometric shape you want to operate on.\n");
    printf("For square, enter 'k' or 'K',\nFor rectangle, enter 'd' or 'D'.\n");
    scanf(" %c", &ch); // Note the space before %c to consume the newline character left in the buffer.

    if (ch == 'K' || ch == 'k')
    {
        // Code block for square
        printf("Square is selected.\nPlease enter the length of one side of the square:\n");
        scanf("%lf", &side1);
        printf("Side length is chosen as %.1f.\n", side1);
        area = side1 * side1;
        perimeter = 4 * side1;
        printf("Area of the square = %.1f\n", area);
        printf("Perimeter of the square = %.1f\n", perimeter);
    }
    else
    {
        // Code block for rectangle
        printf("Rectangle is selected.\nPlease enter the lengths of the short and long sides of the rectangle:\n");
        scanf("%lf %lf", &side1, &side2);
        printf("One side is %.1f and the other side is %.1f.\n", side1, side2);
        area = side1 * side2;
        perimeter = 2 * (side1 + side2);
        printf("Area of the rectangle = %.1f\n", area);
        printf("Perimeter of the rectangle = %.1f\n", perimeter);
    }

    return 0;
}

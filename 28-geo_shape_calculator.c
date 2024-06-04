#include <stdio.h>
#define PI 3.141592654

int main(void)
{
    printf("Welcome to the Geometric Shape Calculator.\n");
    printf("Currently, we support calculations for triangle, square, rectangle, and circle.\n");
    printf("More shapes will be added in future versions.\n");
    int choice;
    float a, b, c, h, r, area, perimeter;

    do
    {
        printf("Please choose a geometric shape to calculate its area and perimeter.\n(Enter '0' to exit.)\n\n");
        // Display the menu
        printf("1 - Square\n");
        printf("2 - Rectangle\n");
        printf("3 - Triangle\n");
        printf("4 - Circle\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: // Square
                printf("You have selected Square.\nEnter the length of one side: ");
                scanf("%f", &a);
                area = a * a;
                perimeter = 4 * a;
                break;

            case 2: // Rectangle
                printf("You have selected Rectangle.\nEnter the length: ");
                scanf("%f", &a);
                printf("Enter the width: ");
                scanf("%f", &b);
                area = a * b;
                perimeter = 2 * (a + b);
                break;

            case 3: // Triangle
                printf("You have selected Triangle.\nEnter the length of the base: ");
                scanf("%f", &a);
                printf("Enter the length of the second side: ");
                scanf("%f", &b);
                printf("Enter the length of the third side: ");
                scanf("%f", &c);
                printf("Enter the height: ");
                scanf("%f", &h);
                area = 0.5 * a * h;
                perimeter = a + b + c;
                break;

            case 4: // Circle
                printf("You have selected Circle.\nEnter the radius: ");
                scanf("%f", &r);
                area = PI * r * r;
                perimeter = 2 * PI * r;
                break;

            case 0: // Exit
                printf("Exiting the program...\n");
                printf("Designed by Rhoilin...\n");
                printf("Geometric Shape Calculator v1.0\n");
                break;

            default: // Invalid choice
                printf("\nInvalid choice!\n");
                printf("Please try again.\n");
                break;
        }

        // Print the result if not exiting
        if (choice != 0)
        {
            printf("Area: %.2f\nPerimeter: %.2f\n\n", area, perimeter);
        }

    } while (choice != 0); // Continue until the user chooses to exit

    return 0;
}

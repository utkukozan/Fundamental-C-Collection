#include <stdio.h>
#include <math.h>

int main(void) {
    float distance;
    
    // Define a structure for a point
    struct point {
        int x, y;
    } n1, n2; // Declaring struct variables n1 and n2
    
    // Prompt user for the coordinates of the first point
    printf("Enter the x and y coordinates of the first point: ");
    scanf("%d %d", &n1.x, &n1.y);
    
    // Prompt user for the coordinates of the second point
    printf("Enter the x and y coordinates of the second point: ");
    scanf("%d %d", &n2.x, &n2.y);
    
    // Calculate the distance between the two points using the distance formula
    distance = sqrt(pow((n1.x - n2.x), 2) + pow((n1.y - n2.y), 2));
    
    // Print the calculated distance
    printf("The distance between the two points is: %.2f\n", distance);
    
    return 0;
}

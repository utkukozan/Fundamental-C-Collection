#include <stdio.h>
#include <math.h>

// Define a structure for a point
struct point {
    int x, y;
};

// Function declaration to read a point from the user
struct point readPoint(void);

// Function declaration to calculate the distance between two points
float distance(struct point *, struct point *);

int main(void) {
    struct point p1, p2;
    float distanceBetweenPoints;
    
    // Read the coordinates of the first point from the user
    printf("Enter the coordinates of the first point:\n");
    p1 = readPoint();
    
    // Read the coordinates of the second point from the user
    printf("Enter the coordinates of the second point:\n");
    p2 = readPoint();
    
    // Calculate the distance between the two points
    distanceBetweenPoints = distance(&p1, &p2);
    
    // Display the distance between the two points
    printf("The distance between the two points is: %.2f\n", distanceBetweenPoints);
    
    return 0;
}

// Function definition to read a point from the user
struct point readPoint(void) {
    struct point tempPoint;
    printf("Enter x and y coordinates separated by a space: ");
    scanf("%d %d", &tempPoint.x, &tempPoint.y);
    return tempPoint;
}

// Function definition to calculate the distance between two points
float distance(struct point *a, struct point *b) {
    float dist = pow(a->x - b->x, 2) + pow(a->y - b->y, 2);
    return sqrt(dist);
}

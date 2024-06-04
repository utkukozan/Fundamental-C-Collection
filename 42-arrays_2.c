/* Assigning Values to Array Elements */

#include <stdio.h>
int main(void) {
    int a[3], b;
    scanf("%d", &b);
    a[2] = b;

    // As seen above, the value entered by the user is assigned to the 3rd element of array a, which is b.

    int a1[3], i;
    for (i = 0; i < 3; i++)
        scanf("%d", &a1[i]);

    // Here, a value is taken from the user for each element of the array a1.

    // Example Program: A program that takes 5 integers from the user, stores them in an array, and calculates their average at the end

    int x[5];
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &x[i]);
    double average = 0, sum = 0;
    for (i = 0; i < 5; i++)
        sum = sum + x[i];
    average = sum / 5.0;
    printf("Average: %lf", average);

    // Arrays can also be initialized as follows:

    int v[3] = {3, 4, 6};
    // This initialization assigns numbers to the triple elements of the array within the square brackets.

    float d[5] = {2.0, 3.4, 5.1};
    // Here, the first 3 elements of the array of size 5 are filled with numbers, and the remaining 2 are automatically filled with the real number 0.0.

    int prime[] = {11, 7, 5, 13, 19};
    // Here, even though the size of the array is not specified, the numbers are assigned from the 0th element (1st element) to the 5th element.

	return 0;
}

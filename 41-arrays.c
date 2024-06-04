#include <stdio.h>

int main(void) {
    int array[100]; // Array declaration like this is done. This array is used instead of declaring 100 different variables in memory.
    double b[5];    // This type of array indicates that it holds 5 real numbers in memory.
    // The elements of the above array start from 0 (a[0]) and go up to 4 (a[4]).

    // Now let's access all elements of an array with the following command.
    int grades[4];
    int i;
    grades[0] = 20;        // With this command, the value 20 is assigned to the first element of the grades array.
    grades[2] = grades[0] + 10;    // With this command, 30 (the first element plus 10) is assigned to the 3rd element of the grades array.
    grades[1] = grades[0] * 2;    // With this command, 40 (twice the value of the first element) is assigned to the 2nd element of the grades array.
    grades[3] = grades[0] + grades[2];    // With this command, 50 (the sum of two elements) is assigned to the last element of the grades array.
    i = 0;
    grades[i] = 90;        // Here, by setting the value of i to 0 beforehand, we access grades[0] and assign it the value 90.
    grades[++i] = 70;        // Here, by incrementing the value of i by 1, we access grades[1] and assign it the value 70.

    // Now let's demonstrate adding the elements of arrays.
    int sum = 0;
    sum = grades[0] + grades[1] + grades[2] + grades[3];    // ... Long method ...

    sum = 0;
    for (i = 0; i <= 100; i++)
        sum = sum + grades[i];    // ... Short method ...

    //SAMPLE PROGRAM
    //A program that creates an array holding squares of numbers from 1 to 100 and prints the first and last elements of the array:

    /* Creating array elements */
    int squares[100], j;
    for (j = 0; j < 100; ++j)
        squares[j] = (j + 1) * (j + 1);

    /* Printing first and last elements */
    printf("%d %d", squares[0], squares[99]);
    return (0);
}

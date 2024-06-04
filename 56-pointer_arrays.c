#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    // Arrays can also be defined using pointers. For example, an array can consist of pointers. This definition opens a 2-dimensional array in a different way.
    char array1[4][4];
    // Instead of this, you can write:
    char *array2[4];
    // Here, array1 is a 4x4 array, while array2 is a one-dimensional array consisting of pointers.
    // If we assign a 4-element array to each column of array2, we can access each element as if it were a 2-dimensional array.
    array2[1][3] = 'A';

    char *seasons[4] = {"Autumn", "Winter", "Spring", "Summer"};
    seasons[3][2] = 'k'; // This assignment changes the word 'Summer' in the last term of the array to 'Sumker'.
    
    return 0;
}

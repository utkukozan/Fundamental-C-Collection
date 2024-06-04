#include <stdio.h>

int main(void) {
    // Structures with each element being an array are called multidimensional arrays.
    // We can access the elements of 2D arrays using row and column indices.
    int matrix_a[4][3]; // Example declaration. The first dimension is rows, and the second dimension is columns.

    // Assigning values to 2D array elements is similar to 1D arrays.
    matrix_a[1][1] = 90; // Changed the value of the element in the first row and first column to 90.

    // Value assignment during declaration:
    int matrix_b[4][3] = {
        {15, 30, 39},
        {23, 65, 30},
        {32, 61, 12},
        {48, 34, 11}
    }; // Assigned values sequentially, row by row.

    // In this case, the number of rows may not be specified. C will adjust it automatically. However, the number of columns must be specified!
    int matrix_c[][3] = {
        {15, 30, 39},
        {23, 65, 30},
        {32, 61, 12},
        {48, 34, 11}
    }; // Here, commas are omitted as in the previous example. This is called row-wise initialization. It fills the first row, then automatically moves to the next row.
    // If there were missing values, they would be automatically filled with 0.

    int matrix_f[30][3], row, column;
    for (row = 0; row < 30; ++row) {
        for (column = 0; column < 3; ++column)
            matrix_f[row][column] = 0;
    }
    // This way, we perform value assignment row-wise. It starts filling from the first row (3-element space), then moves to the next row.

    int matrix_g[30][3];
    for (column = 0; column < 3; ++column) {
        for (row = 0; row < 30; ++row)
            matrix_g[row][column] = 0;
    }
    // This way, we perform value assignment column-wise. It starts filling from the first column, then moves to the next column.

    // Example Program: Multiplication Table
    int multiplication_table[10][10], i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++)
            multiplication_table[i][j] = (i + 1) * (j + 1);
    }

    return 0;
}

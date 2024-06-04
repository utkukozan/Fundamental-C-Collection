#include <stdio.h>
int main(void)
{
    int a[10][10], i, j, size;
    
    printf("Input size of the square array: "); // Ask the user for the size of the square array
    scanf("%d", &size);
    
    printf("Input %d integers: ", size * size); // Ask the user to input integers for the array
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            scanf("%d", &a[i][j]);
    
    printf("Original matrix is:\n"); // Display the original matrix
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", a[i][j]);	
        }
        printf("\n");
    }	
    
    printf("Modified matrix is:\n"); // Display the modified matrix
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
            if(i >= j)
                printf("%d ", a[i][j]); // Print the elements of the upper triangular part of the matrix
            else
                printf("%d ", 0); // Print 0 for the elements of the lower triangular part
        printf("\n");	
    }	
}

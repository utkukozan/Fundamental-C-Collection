#include <stdio.h>
int main(void)
{
    int i, j, arr[100], n, storage, last;
    printf("Please enter a positive number n: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("Shifting operation is starting...\n");
    
    last = arr[n - 1];
    
    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    
    printf("Generated array: ");
    
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
}

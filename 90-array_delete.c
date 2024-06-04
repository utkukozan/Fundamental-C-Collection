#include <stdio.h>

int main(void)
{
    int a[5], i, j, value, index;
    int value_found;

    printf("Input array: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    do {
        value_found = 0; // Flag to check if the value to be deleted is found
        printf("Input value to be deleted: ");
        scanf("%d", &value);

        // Check if the value to be deleted is in the array
        for (i = 0; i < 5; i++) {
            if (a[i] == value) {
                index = i;
                value_found = 1;
                break;
            }
        }

        if (!value_found) {
            printf("Value not found. Please try again.\n");
        }

    } while (!value_found);

    // After finding the value, remove it from the array
    for (i = index + 1; i < 5; i++) {
        a[i - 1] = a[i];
    }

    printf("Modified array: ");
    for (i = 0; i < 5 - 1; i++)
        printf("%d ", a[i]);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findFrequency(int a[], int size) {
    int i, j, k = 0, freq[10], counter;
    for (i = 1; i <= 10; i++) {
        counter = 0;
        for (j = 0; j < size; j++)
            if (a[j] == i)
                counter++;

        freq[k] = counter;
        k++;
    }

    printf("Score Frequency Histogram\n");
    for (i = 1, k = 0; i <= 10; i++, k++) {
        printf("%d\t%d\t", i, freq[k]);
        for (j = 1; j <= freq[k]; j++)
            printf("*");

        printf("\n");
    }
}

void findmode(int arr[], int *mod, int *modvalue, int size) {
    int x, y, count;
    for (y = 1; y < 10; y++) {
        count = 0;
        for (x = 0; x < size; x++)
            if (arr[x] == y)
                count++;

        if (count > *mod) {
            *mod = count;
            *modvalue = y;
        }
    }
}

int main(void) {
    int a[100], size, i, mod = 0, modvalue;

    // Kullanıcıdan dizinin boyutunu al
    printf("Enter the size of the array (maximum 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid size entered. Exiting...\n");
        return 1;
    }

    // Kullanıcıdan diziyi al
    printf("Enter %d integers between 1 and 10:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
        if (a[i] < 1 || a[i] > 10) {
            printf("Invalid input. Enter integers between 1 and 10 only.\n");
            return 1;
        }
    }

    findFrequency(a, size);
    findmode(a, &mod, &modvalue, size);

    printf("\nMode value is %d. It occurred %d times.\n", modvalue, mod);

    return 0;
}

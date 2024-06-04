#include <stdio.h>

void max(int a[], int n);

int main(void) {
    int k[5], i;
    printf("Enter five integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &k[i]);
    }
    max(k, 5); // The address of the first element of the array is passed to the function. Similar to &a[0].
    return 0;
}

void max(int a[], int n) {
    int i, max;
    max = a[0];
    for (i = 1; i < n; ++i) {
        if (a[i] > max)
            max = a[i];
    }
    printf("Maximum value of the array: %d", max);
}

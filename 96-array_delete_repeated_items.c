#include <stdio.h>

void removeDuplicates(int a[], int b[], int size, int *k) {
    *k = 0; // For storing the size of the second array
    int i;
    for (i = 0; i < size; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            b[(*k)++] = a[i];
        }
    }
}

int main(void) {
    int a[99], b[99], n, i, k;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input %d array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    removeDuplicates(a, b, n, &k);
    
    if (k < n) {
        printf("Duplicate elements found and removed.\n");
        for (i = 0; i < k; i++) {
            printf("%d ", b[i]);
        }
    } else {
        printf("No duplicate elements found. Original array:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }
    
    return 0;
}

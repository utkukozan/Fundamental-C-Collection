#include <stdio.h>

int main(void) {
    int *arrPtr, arr[5];
    arrPtr = &arr[0];
    // The command above points to the address of the first element of the 'arr' array, as previously learned (see: Pointers).
    *arrPtr = 7;
    // The command above assigns the value 7 to the first element of the 'arr' array.
    arrPtr + 1;
    // This command requests an integer-sized memory allocation, i.e., 4 bytes, starting from the first element of the 'arr' array.
    // Consequently, if the address is 6000, after this command it will be 6004. This new address will point to the arr[1] element.
    *(arrPtr + 1) = 10;
    // Assuming arrPtr currently points to 6004, i.e., the address of the second element, the command above assigns the value 10 to the second element.
    // We can also use the ++ and -- operators with the same logic:
    arrPtr++; // The value previously 6004 will now be 6008. So, it points to the third element of our array.

    // The output of the following program is provided alongside each line.
    double a[] = {3.9, 2.4, 7.7, 1.1};
    double *p;
    p = a; // This command assigns the address of the first element of the 'a' array to the 'p' pointer. So, p = &a[0].
    printf(" %f ", *a);  // Output: 3.900000
    printf(" %f ", a[0]); // Output: 3.900000
    printf(" %f ", *p);   // Output: 3.900000
    printf(" %f ", p[0]); // Output: 3.900000
    printf(" %f ", p[1]); // Output: 2.400000
    printf(" %f ", a[1]); // Output: 2.400000
    return 0;
}

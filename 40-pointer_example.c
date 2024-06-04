#include <stdio.h>

void changeValue(int *ptr) {
    *ptr = 8;
    printf("Inside function: %d \n", *ptr);
}

int main(void) {
    int num = 1;
    printf("Before calling function: %d \n", num);
    changeValue(&num);
    printf("After calling function: %d \n", num);
    return 0;
}

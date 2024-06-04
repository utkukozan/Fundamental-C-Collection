#include <stdio.h>

// Define the structure for student
struct student {
    char name[15];
    int age;
    float average;
    char gender;
};

// Function declaration for "func"
struct student func(void);

int main(void) {
    struct student person;
    person = func();
    // ...
    return 0;
}

// Definition of the function "func"
struct student func(void) {
    struct student a;
    // ...
    return a;
}

// In the example above, the "func" function is designed to return a struct (not int func(void), but struct student func(void)).
// The crucial point here is that the struct is defined outside the main function. This way, the struct is globally accessible.

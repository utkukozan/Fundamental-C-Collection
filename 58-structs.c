/* The primary purpose of structures in the C language is not only to store elements as in arrays, which can only be used with a single data type,
but also to store multiple different types of information. */

// Usage:
/* struct tag_name {
    data_type variable1;
    data_type variable2;
    data_type variable3;
    ...
    ...
    ...
}; */

#include <stdio.h>

struct student {
    char name[15];
    char surname[15];
    int number;
    int age;
};  

int main(void) {
    struct student william = {"William", "Brown", 11408, 24}; // The name, surname, number, and age are defined in order.
    printf("Name: %s, Surname: %s, Number: %d, Age: %d", william.name, william.surname, william.number, william.age); // To print, you use dot notation like this.
}

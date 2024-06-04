#include <stdio.h>
#include <string.h>

// Define a structure for student
struct student {
    char name[20];
    char surname[20];
    int number;
};

int main(void) {
    struct student *ptr; // Pointer definition
    struct student student1;
    
    // Assign values to the student1 structure
    strcpy(student1.name, "William");
    strcpy(student1.surname, "Johnson");
    student1.number = 211;
    
    ptr = &student1; // Pointer now holds the address of student1
    
    // Normal usage, accessing struct members directly without using pointer notation
    printf("%s %s %d\n", student1.name, student1.surname, student1.number);
    
    // Usage with pointers, accessing struct members through the pointer using "->"
    printf("%s %s %d\n", ptr->name, ptr->surname, ptr->number);
    // Note: Using "*ptr.name" or "*ptr.surname" is incorrect in C. 
    // "->" is used for accessing members through pointers.

    return 0;
}

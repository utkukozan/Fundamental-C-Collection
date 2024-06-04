#include <stdio.h>

int main(void) {
    // Define a new name for the int data type using typedef
    typedef int Integer;
    
    // Declare a variable using the new name
    Integer x; // Equivalent to int x;
    
    // Define a structure for students
    struct student {
        char name[15];
        int age;
        float average;
        char gender;
    };
    
    // Define a new name for the struct student using typedef
    typedef struct student Student;
    
    // Declare variables and arrays using the new name
    Student person;
    Student class[30];
    
    // Alternatively, the typedef can be done directly without giving a struct name
    typedef struct {
        char name[15];
        int age;
        float average;
        char gender;
    } Student2; // Define a new name for the anonymous structure
    
    return 0;
}

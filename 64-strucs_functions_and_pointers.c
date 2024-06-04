#include <stdio.h>
#include <string.h>

// Define a structure for student (global)
struct student {
    char name[20];
    char surname[20];
    int number;
};

// Function to display student information using pointer
void show(struct student *p) {
    p->number = 505; // This way, a value can be assigned through the pointer.
    printf("Student information:\nName: %s\nSurname: %s\nNumber: %d", p->name, p->surname, p->number);
}

int main(void) {
    // Declare a student struct variable and initialize it
    struct student student1 = {"William", "Johnson"};

    // Call the function, passing the address of student1
    show(&student1); // The address is passed to the function.

    return 0;
}

// In C, instead of passing the address to a function, it could be sent as a value parameter.
// For example; in a function using (void show(struct student structure_parameter)) as a parameter,
// operations like structure_parameter.number = 20 could be done, and in main, sent as show(student).
// So, in this usage, a structure name is created for both the main function and to be used in the function.
// However, since this operation will lead to both memory loss and time loss in the program execution,
// sending it as an address is a more correct choice.
// With this usage, only the values of a single structure name can be changed or printed in the other function. (see: lines 16-17)

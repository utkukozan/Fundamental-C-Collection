#include <stdio.h>

// Define a structure for student
struct student {
    char name[20];
    char surname[20];
    int number;
};

// Function to get student information
struct student getInfo(void) {
    struct student newStudent;
    printf("Enter student information: ");
    scanf("%s %s %d", &newStudent.name, &newStudent.surname, &newStudent.number);
    return newStudent;
}

// Function to display student information
void displayInfo(struct student s) {
    printf("Student information: %s %s %d\n", s.name, s.surname, s.number);
}

int main(void) {
    // Get student information and store it in student1
    struct student student1 = getInfo();
    
    // Display student information
    displayInfo(student1);

    return 0;
}

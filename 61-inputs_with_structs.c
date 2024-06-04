#include <stdio.h>

struct student {
    char name[20];
    char surname[20];
    int number;
};

int main(void) {
    struct student students[3];
    int i;

    // student[0].age = 16;  // You can individually define age for the 1st element like this.
    // gets(student[1].name); // You can individually define the name for the 2nd element like this.

    for (i = 0; i < 3; i++) {
        printf("Enter information for student %d: ", i + 1);
        scanf("%s %s %d", &students[i].name, &students[i].surname, &students[i].number); // Will sequentially take name, surname, and number for the 1st, 2nd, and 3rd students respectively.
    }
    
    for (i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, Surname: %s, Number: %d\n", i + 1, students[i].name, students[i].surname, students[i].number);
    }
    
    return 0;
    
    // student[1].name[2] = 'T'; // You can change the 3rd character of the name of the 2nd student to 'T' like this.
}

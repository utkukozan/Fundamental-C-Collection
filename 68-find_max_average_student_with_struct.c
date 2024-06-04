#include <stdio.h>
#include <string.h>

struct student {
    char name[15];
    int age;
    float average;
};

void readStudents(struct student s[]);
int main(void) {
    struct student class[8];
    float highestAverage = 0.0;
    char topStudentName[15];
    
    readStudents(class);
    
    for (int i = 0; i < 8; i++) {
        if (class[i].average > highestAverage) {
            highestAverage = class[i].average;
            strcpy(topStudentName, class[i].name);
        }
    }
    
    printf("Top student: %s\n", topStudentName);
    printf("Average: %.2f\n", highestAverage);
    
    return 0;
}

void readStudents(struct student s[]) {
    for (int i = 0; i < 8; i++) {
        printf("Enter name, age, and average of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].age, &s[i].average);
    }
}

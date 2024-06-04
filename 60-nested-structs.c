#include <stdio.h>
#include <string.h>

struct Address {
    char neighborhood[15];
    char street[20];
    char avenue[15];
};

struct student {
    char name[20];
    char surname[20];
    int number;
    int age;
    struct Address address;  // Another structure can be used inside a structure like this.
};

int main(void) {
    struct student student1;
    strcpy(student1.name, "William"); // The reason for using strcpy() function is that you cannot directly copy a string to a char type in C.
    strcpy(student1.surname, "Johnson");
    student1.number = 132;
    student1.age = 20;
    strcpy(student1.address.neighborhood, "Grove"); // Here, we accessed the neighborhood type from the address struct by first accessing it from the student struct.
    strcpy(student1.address.street, "7th Street");
    strcpy(student1.address.avenue, "1032nd Avenue");

    printf("%s %s %d %d %s %s %s", student1.name, student1.surname, student1.number, student1.age, student1.address.neighborhood, student1.address.street, student1.address.avenue);
}

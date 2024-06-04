#include <stdio.h>

int main(void) {
    // Unions are similar to structures, but they all share the same memory.
    // The usage is as follows:

    // Define a union named 'number'
    union number {
        int a;
        double b;
    };
    // Here 'number' is a union type. 'a' and 'b' are its members.
    // To declare a variable of type 'number', we do:
    
    union number x;
    // In this case, memory of size double will be allocated for 'x'.
    // Variable 'x' can hold either 'a' or 'b'.

    // Accessing union members is similar to accessing structure members.
    // union_name.member_name
    // union_pointer->member_name
    // For example:
    x.a = 8;
    // We assigned the value 8 to member 'a'.
    // Now, let's enter the following command:

    x.b = 7.2;
    // The previous value 8 will be replaced, and 7.2 will be written to the same memory location.
}

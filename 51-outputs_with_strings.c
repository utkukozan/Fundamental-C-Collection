#include <stdio.h>

int main(void) {
    // To perform output operations with strings, we use the printf(), sprintf(), and puts() functions.

    /* printf() Function */
    char string1[15] = "hello";
    char string2[] = "good";
    printf("%s", string1);       // hello
    printf("%s", "How are you?"); // How are you?
    printf("%5s", string2);      // __good
    printf("%-5s", string2);     // good__
    printf("%s %s", string1, string2); // hello good

    /* puts() Function */
    // The main purpose of this function is to print a string and automatically move to the next line, similar to using \n with printf.
    char string3[] = "hello";
    char string4[] = "how are you?";
    puts(string3); // This function is commonly used for string output.
    puts(string4);
    // The output will be:
    // hello
    // how are you?

    /* sprintf() Function */
    // This function copies the values of different variables into a new string according to a specified format string.
    // sprintf(string_name, format_string, list); 
    // It allows storing the output of variables defined in the list in the specified string according to the format_string.
    // Example Program:
    float fuel = 47.0;
    float distance = 300;
    char fuel_distance[80];
    sprintf(fuel_distance, "It consumes %5.3f liters of fuel per km", distance / fuel);
    printf("%s", fuel_distance);
    // In the example above, the sprintf() function formatted values into the fuel_distance string.
    
    return 0;
}

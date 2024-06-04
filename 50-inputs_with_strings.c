#include <stdio.h>

int main(void) {
    // For inputting strings, we use the scanf(), gets(), and sscanf() functions.

    /* scanf() Function */

    char aa[11];
    scanf("%s", aa); // Here, the '&' sign is not used because 'aa' is declared as an array and represents the pointer to the first element of the array.
    printf("%s", aa);

    // Note: When 'Computer' is entered as input, 'Computer' will be printed. However, if a sentence like 'Computer Science' is entered, only 'Computer' will be printed,
    // because a space was added after 'Computer'. The remaining characters are not read.

    // To specify the length of the string in the scanf() function, you can use the (%ns) specification.
    // In this case, if the number of characters entered is less than or equal to the specified 'n' value, and if there are no whitespace characters, the entire input is stored.
    // If the number of characters is greater than 'n', the characters are not stored.

    char word[11];
    scanf("%7s", word); // Can only take up to 7 characters.
    printf("%s", word);
    // When the input 'Programming' is used, the output will be 'Program'.

    /* gets() Function */

    char bb[15];
    gets(bb);
    printf("%s", bb);
    // In the examples above, scanf() function did not read beyond a whitespace, whereas gets() function reads whitespace characters as well.
    // 'How are you' input will produce 'How are you' as output.
    // This function returns a NULL pointer when it encounters an empty input (e.g., ctrl+z).

    /* sscanf() Function */
    // In this function, input data is taken not from the keyboard but from another array.
    // Usage format: sscanf(string_name, format_string, input_list);
    char sentence1[25], array[25];
    scanf(sentence1, "%s", array);

    // Example program:
    char sentence[] = "John turned 40 today";
    char string1[20];
    char string2[20];
    int age;
    sscanf(sentence, "%s %s %d", string1, string2, &age); // Reads the first two words as strings and then reads the age as an integer.
    printf("%s --> %d\n", string1, age);
    // In this function, the string1 variable is first read with the %s specification. Then a whitespace is skipped, and string2 is read with the %s specification.
    // After that, encountering a whitespace, the encountered value is read as an integer into the age variable.
    // The phrase "turned 40 today" will not be read.
    
    return 0;
}

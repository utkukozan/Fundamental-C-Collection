#include <stdio.h>
#include <string.h> // This library contains commonly used string processing functions.

int main(void) {
    /* strlen() Function */
    // This function is used to find the length of a string.
    // Usage: strlen(string_name);
    int length;
    char string[10] = "Ali";
    length = strlen(string);
    printf("%d", length); // Output: 3
    
    /* strcpy() Function */
    // This function is used for assignment operations. It is a string copying function.
    // Usage: strcpy(destination_string, source_string);
    // This command copies the value of source_string to destination_string, including adding a null character '\0' at the end.
    // NOTE: The destination_string must have enough space to hold the copied information from source_string. Otherwise, it won't add '\0', causing potential issues in the future.
    
    char string1[13] = "good day";
    char string2[13];
    strcpy(string2, string1);
    printf("%s", string2);
    
    /* strncpy() Function */
    // The only difference between this function and the previous one is that it copies only the first n characters of the string.
    // Usage: strncpy(destination_string, source_string, n);
    // This command copies the first n characters of source_string to destination_string WITHOUT adding a null character '\0' at the end.
    // The NOTE mentioned above also applies here.
    
    char name[30] = "John Doe";
    char lastName[10], firstName[10], middleName[10];
    strncpy(firstName, name, 4);
    firstName[4] = '\0'; // By adding this command, we terminate the string with '\0'. strncpy cannot do this automatically.
    strncpy(middleName, &name[5], 5); // The address of the element to be copied needs to be specified here.
    middleName[4] = '\0';
    strcpy(lastName, &name[11]);
    // With this line, the portion from the 11th element to the end is copied to the lastName string. '\0' will be added automatically. See: strcpy();
    
    /* strcat() Function */
    // This function concatenates one string to the end of another string.
    // Usage: strcat(string1, string2);
    // This command concatenates the value of string2 to the end of string1.
    
    char sentence1[12] = "good day ";
    char sentence2[12] = "How are you?";
    strcat(sentence1, sentence2);
    printf("\nsentence 1: %s %d", sentence1, strlen(sentence1)); // good day How are you? 22
    printf("\nsentence 2: %s ", sentence2);  // How are you?
    // Here, even though the size of sentence1 is 12, after the strcat() operation, its size has increased by the added value, and '\0' has been placed at the end.
    
    /* strncat() Function */
    // This function is similar to strcat() function, but it concatenates only the first n characters of the second string.
    // Usage: strncat(string1, string2, n);
    // This command concatenates the first n characters of string2 to the end of string1.
    
    char phrase1[15] = "good day ";
    char phrase2[15] = "How are you?";
    strncat(phrase1, phrase2, 5);
    printf("\nPhrase 1: %s ", phrase1); // good day How
    printf("\nPhrase 2: %s ", phrase2); // How are you?

    /* strcmp() Function */
    // This function compares two strings.
    // Usage: strcmp(string1, string2);
    // This command returns a value greater than 0 if the value of string1 is greater than string2, and a value less than 0 if vice versa.
    // The comparison of strings as greater or smaller is determined by the order of characters in the ASCII character table.
    
    // string1: Door    string2: Doorman   strcmp(string1, string2)   Result: Negative
    // string1: Doorman string2: Door     strcmp(string1, string2)   Result: Positive
    // string1: Door    string2: Door     strcmp(string1, string2)   Result: 0
    // string1: Door    string2: door     strcmp(string1, string2)   Result: Negative
    
    char string3[13] = "good day ";
    char string4[13] = "How are you?";
    printf("\n%d ", strcmp(string3, string4));  // Returns a value greater than 0.
    
    /* strncmp() Function */
    // This function compares the first n characters of two strings.
    // Usage: strncmp(string1, string2, n);
    // This command compares the first n characters of string1 and string2. The rules are the same as strcmp() function.
    
    char string5[13] = "good day ";
    char string6[13] = "goodbye!";
    printf("\n%d ", strncmp(string5, string6, 3));  // Returns 0 since the first 3 characters are equal.
    
    /* strstr() Function */
    // This function searches for one string within another string.
    // Usage: strstr(string1, string2);
    // This command searches for string2 within string1. If string2 is found inside string1, the function returns a pointer to the location of the first occurrence. Otherwise, it returns NULL.
    
    char string7[13] = "good day ";
    char string8[13] = "day";
    if (strstr(string7, string8) == '\0')
        printf("The second string is NOT found inside the first string.\n");
    else
        printf("The second string is found inside the first string.\n");
    // NOTE: Another usage is to declare the word as a pointer, e.g., char *word[99];
    
    // In the following program, let's replace the word 'example' with 'simple' in the sentence "This is an example sentence".
    char sentence[] = "This is an example sentence";
    char *word;
    word = strstr(sentence, "example"); // This command stores the address of the first occurrence of 'example' in the sentence in the word pointer.
    strncpy(word, "simple", 6); // This command replaces the first 6 characters starting from the word pointer with 'simple'.
    puts(sentence); // Printing command.
    
    return 0;
}

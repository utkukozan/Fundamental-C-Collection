#include<stdio.h>
// Write a program to:
// 1) Take a string from user
// 2) Then replace all dot '.' characters with the preceding letter
// 3) Print the result.
// For example, if the user enters:
// abc...
// The output will be: abcccc
// If the user enters:
// a..b..c.d...
// The output will be: aaabbbccdddd
void replaceDots(char *string) {
    int c = 0;
    while (string[c] != '\0') {
        if (string[c] == '.' && c > 0) {
            string[c] = string[c - 1];
        }
        c++;
    }
}

int main() {
    int max_va = 99;
    char string[max_va];
    
    printf("Enter a string that contains dots: ");
    fgets(string, sizeof(string), stdin);

    replaceDots(string); // Call the function to replace dots

    printf("Result: %s \n", string); // Print the modified string
    return 0;
}
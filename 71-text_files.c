#include <stdio.h>

int main(void) {
    // After a program finishes execution, the data entered into the program and the output obtained from it are lost.
    // To overcome this and make data persistent, we use text files.

    // So far, we've enabled users to input data via the keyboard. However, this method is not effective for data-intensive operations.
    // For example, when we need to write a program to calculate the average exam scores of 100 students in a class, text files come into play.
    // Text files appear differently based on the operating system, such as Wordpad, Vi, Pico, etc.

    // Each record in text files ends with the 'enter' sign. The end of the file is indicated by 'end-of-file marker' (EOF) in C.

    // In C, the <stdio.h> header file contains a special definition of the FILE type to manage text files.

    FILE *file_pointer_name;  // Used in this format. The '*' sign is used to access a previously prepared file on disk.

    /* *** FILE OPENING *** */

    // In C, we use the fopen() function to open files.

    // file_pointer_name = fopen(file_name, mode); is the format used.
    // The fopen() function does two things. Firstly, it opens the file named by the external file name. Secondly, it sends the address of this file to the program.
    // The file opening mode specifies the purpose for which the file will be opened.
    // If the mode is defined as 'r', it indicates that the file is opened for reading.
    // If the mode is defined as 'w', it means the file is opened for writing and creating a file.
    // If the mode is defined as 'a', it allows appending to the end of the file.
    // If the mode is defined as 'r+', it allows both reading and writing in the file.
    // If the mode is defined as 'w+', it allows reading, writing, and creating a file.
    // If the mode is defined as 'a+', it allows reading, writing, creating a file, and continues from the end of previous data.

    FILE *studentFile;
    studentFile = fopen("test.txt", "w");

    // After this command, the variable ogrenciDosyasi can be used to access the "test.txt" file from the program. It's somewhat similar to typedef function but not exactly the same.

    // If the external file cannot be found at the specified physical address or if the disk cannot be used for writing, the file cannot be accessed and it returns "NULL".

    if (studentFile == NULL) {
        printf("test.txt cannot be opened\n");
    }

    // If the file is located outside the program, it should be specified with an address as follows:

    studentFile = fopen("c:\test.txt","r"); // This command will open the file named "test.txt" on the "c:\" drive for writing.

    /* *** FILE CLOSING *** */

    // The fclose() function allows the closing of a file previously opened with the fopen() function. Failure to close opened files leads to erroneous situations.

    fclose(file_pointer_name); // Used in this format.
}

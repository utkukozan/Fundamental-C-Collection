#include <stdio.h>

int main(void)
{
    // stdout is generally defined as the standard output device, typically the computer screen.
    // stdin similarly defines the standard input device, usually the keyboard.
    // For example, the command printf("Hello World\n"); prints the words "Hello World" to the standard output device, which is typically the computer screen.
    fprintf(stdout, "Hello World\n"); // This way, fprintf function can be used inside the computer screen instead of a file.
    // Similarly, the command scanf("%d", &number1); allows reading numerical values.
    int number1;
    fscanf(stdin, "%d", &number1); // In this way, it can be read with the fscanf function.
    
    /* Error Handling */
    
    FILE *fp;
    // clearererr(fp); Clears the error and end-of-file status.
    // feof(fp); Returns a non-zero value if the end-of-file (EOF) has been reached; otherwise, it returns zero.
    // ferror(fp); Returns a non-zero value if an error has occurred; otherwise, it returns zero.
    // perror(s); Displays a one-line error message on the standard output device (stdout).
    
    FILE *output_file_pointer;
    output_file_pointer = fopen("c:/read_file.txt","r"); // We opened the read_file.txt document in output_file_pointer.
    if (output_file_pointer == NULL) // Executes in case of an error.
        perror("Error: File could not be opened"); // Displays a one-line error message on the standard output device (stdout).
    else
    {
        fputc('x', output_file_pointer);    // Adds the character 'x' to the first line of the file.
        if (ferror(output_file_pointer))    // If an error occurs, it returns a value other than zero and executes.
        {
            printf("Error: Writing to c:/read_file.txt failed.\n");
        }
    }
    fclose(output_file_pointer);
    
    return 0;
}

#include <stdio.h>

int main(void)
{
    FILE *filePointer;

    // fseek(file_pointer, offset, whence);
    // Here, file_pointer refers to the file being operated on,
    // offset specifies the distance in bytes from the defined file position where the operation will begin,
    // and whence indicates where the search operation will start.
    // Instead of SEEK_SET, SEEK_CUR, and SEEK_END, you can also directly use their values 0, 1, and 2, respectively.

    // Example usage:
    // fseek(file_pointer, 10L, SEEK_SET); // Move the file pointer 10 bytes from the beginning of the file.

    // If you want to know the current position of the file pointer after some operations, you can use ftell().
    // long position = ftell(file_pointer);

    // To rewind the file, i.e., set the file pointer to the beginning of the file, you can use rewind(file_pointer).
    // rewind(file_pointer);

    return 0;
}

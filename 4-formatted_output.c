#include <stdio.h>
int main(void)
{
    int a = 5;
    printf("Number = %d", a); /* We used %d for int. %i could also be used. */
    float b = 6.4;
    printf("\nDecimal Number = %.1f\n", b); /* We used %f for float. It also works for double. The reason for the .1 before %f is explained below. \n at the end is used for a newline. */

    /* Additionally: 2e4 means 2 to the power of 4. e stands for exponent. */
    /* Additionally: \n is used to move to the next line. It stands for NewLine. */
    /* Additionally: \t is used to indent. It acts as the TAB key. */
    /* Additionally: \b is the backspace character. It deletes the last character. It acts as the BACKSPACE key. */
    /* Additionally: \\ prints a backslash. */
    /* Additionally: \" prints a double quote. */
    // Additionally: If you use a single slash / followed by another slash without an asterisk as seen at the start of this line, it serves the same purpose and does not need to be closed.
    // For char use %c, for integer use %d, for scientific notation use %e, for real numbers use %f or %lf, for strings use %s, for unsigned decimal use %u, for hexadecimal use %x.

    /*  *** IMPORTANT *** The reason for the .1 before %f is to print only 1 digit after the decimal point. If we use 3 or 5, it will add zeros to fill up the specified digits. */
    
    // _________________________________________________________________________________________________
    
    printf("This is the first line.\nThis is the second line."); /* \n can be used this way too. */
    
    char ch = 'B';
    printf("\n%c", ch);
    printf("\n%d", ch);  // Here we print the character (B) with %c. With %d, we print the ASCII code of B.
    
    printf("\n%e", 567.5278); // %e format displays the number in scientific notation. 5.675278e+02 means 5.675278 x 10^2.
    printf("\n%4d", 33); // Here, the 4 means it will print 33 with a total width of 4 characters. It will add 2 spaces before 33.
    printf("\n%012d", 44); // Here, because we used 0, it will add zeros instead of spaces.
    
    double y = 23.4567;
    printf("\n %8.6f", y);  /* This command specifies 6 decimal places. It adds zeros to fill up to 6 places. Total width is 8 characters, including the integer part. */

    printf("\n %8.3f", y); /* This command specifies 3 decimal places. The original number has 4 decimal places, so it rounds off the last digit. The result is 23.457. */

    printf("\n %2s", "UTKU"); /* Here, 2 character width is not sufficient to display the 4-letter string. So, it will automatically expand the width. */
    
    /* Additionally: \r command moves the cursor to the beginning of the line. */
    printf("\n%s \r%s", "Hello", "Utku"); // The command prints the first input, then \r moves the cursor to the start, and prints the second input. The result is "Utkuaba".
    
    printf("\n");
    //_____________________________________________________________________________________________________
    
    /* In scanf commands, when two numbers are written consecutively with spaces or dots in between, it can still recognize them. */
    int x; 
    double z;
    printf("Please enter an integer and a real number.");
    scanf("%d", &x);
    scanf("%lf", &z);
    printf("Numbers are %d and %f", x, z);  /* This command expects an integer first and a real number second. If 6.1 is entered first, it will interpret it as two separate numbers. */

    int u; char cha;
    printf("\nPlease enter a number and a character. If you press Enter in between, it will be recognized as a character.");
    scanf("%d%c", &u, &cha);  /* This command understands A65 as a number and a character without spaces. */
    /* VERY IMPORTANT: If you enter a character followed by pressing "Enter", it will recognize the "Enter" key as a character. To prevent this, you can add a separate scanf command for "Enter". */
    printf("Character %c and your number %d", cha, u);
    
    int p; 
    char chara, dummy;
    printf("\nPlease enter a number and a character. You can press Enter in between.");
    scanf("%d", &p);
    scanf("%c", &dummy); // This command is for the Enter key.
    scanf("%c", &chara);
    printf("Character %c and your number %d", chara, p);
    
    return(0);
}

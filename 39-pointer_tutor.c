#include <stdio.h>

int main(void)
{
    // Pointers are defined in the following manners.
    // Their purpose is to store the memory address.
    int *xptr; // Asterisk indicates it's a pointer.
    int *aptr; // The location of the asterisk doesn't matter.
    char *apt, *bpt, *cpt; // Multiple pointers can be defined.
    
    // Now let's test.
    
    int s = 4;
    // Our goal is to find the memory address where x is stored.
    xptr = &s; // Here '&' is the address operator. So &x = the address of x.
    printf("%d\n", xptr);
    
    *xptr = 6; // This command assigns the value 6 to the cell pointed by xptr.
    // Thus, the new value of x is not 4 but 6. In other words, '*' operator is used to access the content of the cell.
    printf("%d", s);
    
    // IMPORTANT NOTE: '*' (indirection) OPERATOR USED IN THE PREVIOUS COMMAND AND THE OPERATORS LIKE (*xptr) USED FOR DECLARATION ARE NOT THE SAME!!!
    
    // Let's demonstrate another way of copying two variables.
    
    float a, b = 7.2; // Real number variables
    float *aptrt; // Real number pointer
    
    // Normally, 'a' would be copied to 'b' like this:
    a = b;
    // Alternatively, the following commands can also be used.
    aptrt = &b; // The address of b is copied to aptr.
    a = *aptrt; // The content of the address stored in aptr is copied to a
    
    /* TO UNDERSTAND THE DIFFERENCE BETWEEN '&' AND '*' OPERATORS, LET'S LOOK AT AN EXAMPLE */
    int x = 7;
    int *y;
    y = &x;
    printf("%d\n", *y); // 7 will be printed. If 'y' was used instead of '*y', it would use the memory address of x.
    
    /* NULL COMMAND */
    // We use NULL when we don't want a pointer to point to any cell in memory.
    int *gos;
    gos = NULL;
    
    /* USAGE OF POINTERS IN scanf COMMAND */
    // There's no need to redefine 'x' and 'y' here since they were already defined.
    scanf("%d", &x);
    scanf("%d", y);
    // The first scanf, as we learned at the beginning, is used for value assignment using the '&' operator.
    // Due to the structure of the scanf command, it needs to know the address of the variable in order to assign data.
    // Therefore, by using &x, we are assigning a value to the address of x.
    // For the second scanf; since the value of y already specifies the address of x (see: y = &x command),
    // there is no difference between the first and second scanf.
    
    return 0;
}

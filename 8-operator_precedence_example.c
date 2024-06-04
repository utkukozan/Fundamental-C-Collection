#include <stdio.h>
#include <math.h>
int main(void)
{
    /* The order of precedence from highest to lowest is as follows:
    
    ( )  
    * / %
    +  -
    <  <=  >  >=
    ==    !=     (!=  means Not equal to)
    &&
    ||
    =  
    *The example below demonstrates the precedence. */
    int i = 5, k = 20, operation;
    operation = i > 5 * k % 3 && !(k - 2 != 18);
    printf("%d", operation);
    /* The result will be 1. It first performs the operations inside the parentheses.
    k - 2 = 18
    18 != 0 becomes true. The negation operator takes the opposite. So, anything but 0 becomes 0.
    0 = 18 --> This is false.
    Now it moves outside the parentheses and encounters the negation at the start.
    !0 = 1. The negation operator takes the opposite.
    Then it will take the other part of the && operator.
    5 * k = 100
    100 % 3 = 1
    i > 1 --> 1 which is true.
    The final operation is the "and" operation (&&).
    1 && 1 = 1. It has calculated the operations according to the precedence. */
    
    // Another important example is below.
    int number, question, solution;
    question = 0 < number < 100;
    number = 145;
    printf("\n%d", question);
    // The output is 1, which means TRUE. However, 0 < 145 < 100 is not a true statement.
    // Due to the precedence, it first evaluated 0 < 145, which is true (1).
    // Then it evaluated 1 < 100, which is also true. Therefore, the output is 1.
    // To avoid this mistake, it should be done as follows.
    solution = number > 0 && number < 100;
    printf("\n%d", solution);
    // Here, it first evaluated 145 > 0, which is true (1). Then it evaluated 145 < 100, which is false (0).
    // Finally, 1 && 0 is evaluated as 0, so the output is 0.

    return(0);
}

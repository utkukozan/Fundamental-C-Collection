#include <stdio.h>

int main(void)
{
    int i, k, n, a = 1;
    
    for (i = 0; i <= 10; i++)
    {
        for (n = 9; n >= i; n--)
        {
            printf(" ");
        }
        printf("/");
        for (k = 1; k <= a; k++)
        {
            printf("*");
        }
        a += 2;
        printf("\\");
        printf("\n");
    }

    return 0;
}

/*
     /\
    /**\
   /****\
  /******\
 /********\
./**********\.
*/

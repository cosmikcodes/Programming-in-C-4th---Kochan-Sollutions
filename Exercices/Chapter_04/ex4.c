//A program that generate a table of the first 10 factorials.

#include <stdio.h>

int main (void)
{
    printf ("TABLE OF FACTORIALS\n\n");
    printf ("-------------------\n");
    
    for ( int i = 1, fac = 1; i <= 10; ++i ) {
        fac *= i;
        printf ("%2i        %i\n", i, fac);
    }

    return 0;
}

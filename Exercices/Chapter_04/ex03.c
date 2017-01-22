/* A program that generate a table of triangular numbers
   every fifth number between 5 and 50 */

#include <stdio.h>

int main (void)
{
    printf ("---Table of triangular numbers---\n");
    printf ("---------------------------------\n");

    for ( int n = 5; n <= 50; n += 5 ) {
        int triangularNum = n * (n + 1) / 2;
        printf ("   %2i           |         %4i\n", n, triangularNum);
    }

    return 0;
}

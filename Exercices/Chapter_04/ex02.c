//Display a table of n and n².

#include <stdio.h>

int main (void)
{
    printf ("---TABLE OF n AND n²---\n\n");
    printf ("---n---      ---n²---\n");

    for ( int n = 1; n < 11; ++n ) {
        printf ("  %2i          %3i\n", n, n*n);
    }

    return 0;
}

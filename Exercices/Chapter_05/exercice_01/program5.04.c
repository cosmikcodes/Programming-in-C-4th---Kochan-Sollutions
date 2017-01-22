//A program to determine if a number is even or odd.

#include <stdio.h>

int main (void)
{
    int number, remainder;

    printf ("Enter the number to test: ");
    scanf  ("%i", &number);

    remainder = number % 2;

    if ( remainder == 0 )
        printf ("\nThe number is even!\n");
    else
        printf ("\nThe number is odd!\n");

    return 0;
}

//Calculate the absolute value of an integer

#include <stdio.h>

int main (void)
{
    int number;

    printf ("Type your number: ");
    scanf  ("%i", &number);

    if ( number < 0 )
        number = -number;

    printf ("The absolute value is: %i", number);

    return 0;
}

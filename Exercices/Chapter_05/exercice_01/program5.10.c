//  Program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>


int main (void)
{
    bool prime;

    for ( int number = 2; number <= 50; number++ ) {
        prime = true;

        for ( int i = 2; i < number; ++i )
            if ( number % i == 0 )
                prime = false;

        if ( prime )
            printf ("%i ", number);
    }

    return 0;
}

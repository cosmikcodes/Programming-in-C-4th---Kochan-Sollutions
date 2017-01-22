//  Program to categorizing a single character that is entered at the terminal.

#include <stdio.h>

int main (void)
{
    char character;

    printf ("Enter the character to categorize: ");
    scanf  ("%c", &character);

    if ( (character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') )
        printf ("Its a letter.\n");
    else if ( character >= '0' && character <= '9' )
        printf ("Its a number.\n");
    else
        printf ("Its a special character.\n");

    return 0;
}

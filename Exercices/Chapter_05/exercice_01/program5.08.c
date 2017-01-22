/*  Program to evaluate simple expressions of the form:
 *   number operator number
 */

#include <stdio.h>

int main (void)
{
    float value1, value2;
    char operator;

    printf ("Enter the expression: ");
    scanf  ("%f %c %f", &value1, &operator, &value2);

    if ( operator == '+' )
        printf ("%.2f %c %.2f = %.2f\n", value1, operator, value2, value1 + value2);
    else if ( operator == '-' )
        printf ("%.2f %c %.2f = %.2f\n", value1, operator, value2, value1 - value2);
    else if ( operator == '*' )
        printf ("%.2f %c %.2f = %.2f\n", value1, operator, value2, value1 * value2);
    else if ( operator == '/' )
        printf ("%.2f %c %.2f = %.2f\n", value1, operator, value2, value1 / value2);
    else
        printf ("Invalid operator.\n");

    return 0;
}

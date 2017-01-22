/*  Program to evaluate simple expressions of the form:
                                                       number operator number
*/

#include <stdio.h>

int main (void)
{
    float value1, value2;
    char operator;

    printf ("Enter the expression: ");
    scanf  ("%f %c %f", &value1, &operator, &value2);

    switch (operator) {
        case '+':
            printf ("%.2f %c %.2f = %.2f\n", value1, operator, value2, value1 + value2);
            break;
        case '-':
            printf ("%.2f %c %.2f = %.2f\n", value1, operator, value2, value1 - value2);
            break;
        case '*':
            printf ("%.2f %c %.2f = %.2f\n", value1, operator, value2, value1 * value2);
            break;
        case '/':
            if ( value2 == 0 )
                printf ( "Division by zero!\n");
            else
                printf ("%.2f %c %.2f = %.2f\n", value1, operator, value2, value1 / value2);
            break;
        default:
            printf ("Invalid operator.\n");
            break;
    }

    return 0;
}

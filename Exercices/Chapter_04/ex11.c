//Sum the digits of the number entered.

#include <stdio.h>

int main (void)
{
    int number, right_number, sum;

    printf ("Enter a integer number: ");
    scanf  ("%i", &number);

    sum = 0;
    while (number != 0) {
        right_number = number % 10;
        sum += right_number;
        number /= 10;
    }

    printf ("The sum of the digits of the number entered is %i\n", sum);

    return 0;
}

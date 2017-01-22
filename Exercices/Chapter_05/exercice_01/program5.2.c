/* Calculate the average of a set grades
   and count the number of failing test grades */

#include <stdio.h>

int main (void)
{
    int n_grades, grade;
    float grade_average;
    int count_failure = 0, grade_total = 0;

    printf ("How many grades you will be entering? ");
    scanf  ("%i", &n_grades);

    for ( int i = 1; i <= n_grades; ++i ) {
        printf ("Enter the grade #%i: ", i);
        scanf  ("%i", &grade);

        if ( grade < 65 )
            ++count_failure;

        grade_total += grade;
    }

    grade_average = (float)grade_total / n_grades;

    printf ("\nGrade average = %.2f", grade_average);
    printf ("\nNumber of failures = %i", count_failure);

    return 0;
}

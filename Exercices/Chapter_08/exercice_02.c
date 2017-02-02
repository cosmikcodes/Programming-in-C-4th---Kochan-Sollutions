// Program to calculate the number of days between two dates.

#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main(void)
{
    // Declarations.
    int calculateN(struct date date_name);

    // Variables.
    struct date firstDate, secondDate;
    int N1, N2;
    
    // Program.
    printf("Enter the first date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &firstDate.month, &firstDate.day, &firstDate.year);

    printf("Enter the second date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &secondDate.month, &secondDate.day, &secondDate.year);

    N1 = calculateN(firstDate);
    N2 = calculateN(secondDate);

    printf("\nElapsed days = %i \n", N2 - N1);
    
    return 0;
}

//Function to calculate N.
int calculateN(struct date date_name)
{
    // Function to calculate f.
    int f(struct date date_name)
    {
	if (date_name.month <= 2) {
	    return date_name.year - 1;
	}
	else {
	    return date_name.year;
	}
    }

    // Function to calculate g.
    int g(struct date date_name)
    {
	if (date_name.month <= 2) {
	    return date_name.month + 13;
	}
	else {
	    return date_name.month + 1;
	}
    }

    int N = 1461*f(date_name)/4.0 + 153*g(date_name)/5.0 + date_name.day;

    return N;
}

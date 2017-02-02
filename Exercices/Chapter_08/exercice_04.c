// Program to determine what day of the week the date is.

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
    void dayOfTheWeek(struct date date);
    
    // Variables.
    struct date date;
    
    printf("Enter the date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &date.month, &date.day, &date.year);

    printf("\nDay of the week: ");
    dayOfTheWeek(date);
    printf("\n");
    
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

// Function to find day of the week.
void dayOfTheWeek(struct date date)
{
    int day = (calculateN(date) - 621049) % 7;
    char monday[6] = {'m', 'o', 'n', 'd', 'a', 'y'};
    char tuesday[7] = {'t', 'u', 'e', 's', 'd', 'a', 'y'};
    char wednesday[9] = {'w', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y'};
    char thursday[8] = {'t', 'h', 'u', 'r', 's', 'd', 'a', 'y'};
    char friday[6] = {'f', 'r', 'i', 'd', 'a', 'y'};
    char saturday[8] = {'s', 'a', 't', 'u', 'r', 'd', 'a', 'y'};
    char sunday[6] = {'s', 'u', 'n', 'd', 'a', 'y'};
	        
    switch (day) {
    case 1: {
	for (int i = 0; i < 6; ++i) {
	    printf("%c", monday[i]);
	}
	break;
    }
    case 2: {
	for (int i = 0; i < 7; ++i) {
	    printf("%c", tuesday[i]);
	}
	break;
    }
    case 3: {
	for (int i = 0; i < 9; ++i) {
	    printf("%c", wednesday[i]);
	}
	break;
    }
    case 4: {
	for (int i = 0; i < 8; ++i) {
	    printf("%c", thursday[i]);
	}
	break;
    }
    case 5: {
	for (int i = 0; i < 6; ++i) {
	    printf("%c", friday[i]);
	}
	break;
    }
    case 6: {
	for (int i = 0; i < 8; ++i) {
	    printf("%c", saturday[i]);
	}
	break;
    }
    case 7: {
	for (int i = 0; i < 6; ++i) {
	    printf("%c", sunday[i]);
	}
	break;
    }
    }
}

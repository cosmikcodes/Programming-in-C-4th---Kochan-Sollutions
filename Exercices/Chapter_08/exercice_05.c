#include <stdio.h>
#include <stdbool.h>

struct date
{
    int day;
    int month;
    int year;
};

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

int main(void)
{
    // Declarations.
    struct time timeUpdate(struct time now);
    struct date dateUpdate(struct date today);
    struct dateAndTime clockKeeper(struct dateAndTime sDateAndTime);
    int numberOfDays(struct date d);
    bool isLeapYear(struct date d);
    
    // Variables.
    struct dateAndTime dateTime, updatedDT;
    
    printf("Enter the date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &dateTime.sdate.month,
	  &dateTime.sdate.day, &dateTime.sdate.year);

    printf("Enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &dateTime.stime.hour,
	  &dateTime.stime.minutes, &dateTime.stime.seconds);

    updatedDT = clockKeeper(dateTime);
    
    printf("\nDate: %.2i/%.2i/%.2i Time: %.2i:%.2i:%.2i\n",
	   updatedDT.sdate.month, updatedDT.sdate.day, updatedDT.sdate.year,
	   updatedDT.stime.hour, updatedDT.stime.minutes, updatedDT.stime.seconds);

    return 0;
}

// Function to update time.
struct time timeUpdate(struct time now)
{
    ++now.seconds;

    if (now.seconds == 60) {
	now.seconds = 0;
	++now.minutes;

	if (now.minutes == 60) {
	    now.minutes = 0;
	    ++now.hour;

	    if (now.hour == 24) {
		now.hour = 0;
	    }
	}
    }

    return now;
}

// Function to calculate nextw's date
struct date dateUpdate(struct date today)
{
    struct date nextw;
    int numberOfDays(struct date d);

    if (today.day != numberOfDays(today)) {
	nextw.day = today.day + 1;
	nextw.month = today.month;
	nextw.year = today.year;
    }
    else if (today.month == 12) {
	nextw.day = 1;
	nextw.month = 1;
	nextw.year = today.year + 1;
    }
    else {
	nextw.day = 1;
	nextw.month = today.month + 1;
	nextw.year = today.year;
    }

    return nextw;
}

// Function to find the number of days in a month.
int numberOfDays(struct date d)
{
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(d) == true && d.month == 2) {
	days = 29;
    }
    else {
	days = daysPerMonth[d.month - 1];
    }

    return days;
}

// Function to determine if it's a leap year.
bool isLeapYear(struct date d)
{
    bool leapYearFlag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
	leapYearFlag = true;
    }
    else {
	leapYearFlag = false;
    }

    return leapYearFlag;
}

// Function to update date and time.
struct dateAndTime clockKeeper(struct dateAndTime sDateAndTime)
{
    struct dateAndTime updatedDT;
    
    updatedDT.stime = timeUpdate(sDateAndTime.stime);
    updatedDT.sdate = sDateAndTime.sdate;
    
    if (updatedDT.stime.hour == 00 &&
	updatedDT.stime.minutes == 00 &&
	updatedDT.stime.seconds == 00) {
        updatedDT.sdate = dateUpdate(sDateAndTime.sdate);
    }

    return updatedDT;
}

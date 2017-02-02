// Program to calculate the elapsed time between two times entered.

#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

int main(void)
{
    // Declarations.
    void elapsedTime(void);

    elapsedTime();

    return 0;
}

// Function to calculate the elapsed time.
struct time calculateElapsedTime(struct time firstTime, struct time secondTime)
{
    // Variables and const.
    struct time elapsedTime;
    int totalSeconds1, totalSeconds2, totalSeconds;
    const int oneDaySeconds = 60*60*24;

    // Convert time to seconds.
    totalSeconds1 = firstTime.hour * 60 * 60;
    totalSeconds1 += firstTime.minutes * 60;
    totalSeconds1 += firstTime.seconds;

    totalSeconds2 = secondTime.hour * 60 * 60;
    totalSeconds2 += secondTime.minutes * 60;
    totalSeconds2 += secondTime.seconds;

    // Test to see if the time is in another day.
    if (totalSeconds1 <= totalSeconds2) {
	totalSeconds = totalSeconds2 - totalSeconds1;
    }
    else {
	totalSeconds = totalSeconds2 + oneDaySeconds - totalSeconds1;
    }

    // Convert time to hours, minutes and seconds.
    elapsedTime.seconds = totalSeconds % 60;
    totalSeconds -= totalSeconds % 60;
    totalSeconds /= 60;

    elapsedTime.minutes = totalSeconds % 60;
    totalSeconds -= totalSeconds % 60;
    totalSeconds /= 60;

    elapsedTime.hour = totalSeconds;

    return elapsedTime;
}

// Function to ask for input and print the elapsed time.
void elapsedTime(void)
{
    // Declarations.
    struct time calculateElapsedTime(struct time firstTime, struct time secondTime);
    
    // Variables.
    struct time firstTime, secondTime, elapsedTime;

    // Calculate elapsed time and print.
    printf("Dont use 0 before numbers (like '09').\n");
    printf("It will be converted to octal, and may cause errors.\n");
    
    printf("Enter the first time (hh:mm:ss): ");
    scanf("%i:%i:%i", &firstTime.hour, &firstTime.minutes, &firstTime.seconds);
    
    printf("Enter the second time (hh:mm:ss): ");
    scanf("%i:%i:%i", &secondTime.hour, &secondTime.minutes, &secondTime.seconds);
  
    elapsedTime = calculateElapsedTime(firstTime, secondTime);

    printf("\nElapsed time: %.2i:%.2i:%.2i\n",
	   elapsedTime.hour, elapsedTime.minutes, elapsedTime.seconds);
}

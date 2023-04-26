#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0 to indicate success
*/

int main(void)
{
    int month;
    int day;
    int year;

    // Set the date
    month = 4;
    day = 1;
    year = 1997;

    // Print the date
    printf("Date: %02d/%02d/%04d\n", month, day, year);

    // Convert the day to the day of the year
    day = convert_day(month, day);

    // Print how many days are left in the year
    print_remaining_days(month, day, year);

    // Return 0 to indicate success
    return (0);
}

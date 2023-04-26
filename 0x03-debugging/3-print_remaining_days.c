#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
    // Check if it's a leap year (divisible by 4 and not divisible by 100, except if divisible by 400)
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        // If it's a leap year and it's after February 29th, increment the day count
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        // Print the day of the year and the remaining days
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        // If it's not a leap year or it's before February 29th
        if (month == 2 && day == 60)
        {
            // If it's February 29th on a non-leap year, it's an invalid date
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            // Print the day of the year and the remaining days (365 in a non-leap year)
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

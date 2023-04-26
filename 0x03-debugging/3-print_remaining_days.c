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
    // Check if the year is a leap year, accounting for both the 100-year and 400-year rules.
    if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
    {
        // If it is a leap year and the date is after February 29, add one day to account for the leap year.
        if (month > 2 && day >= 60)
        {
            day++;
        }
        
        // Print the day of the year and the remaining days in the year.
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        // If it is not a leap year, check if the date is February 29.
        if (month == 2 && day == 60)
        {
            // If it is February 29 on a non-leap year, print an error message.
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            // Otherwise, print the day of the year and the remaining days in the year.
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

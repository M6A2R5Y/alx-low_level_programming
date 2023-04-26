#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are left in the year, taking leap years into account.
 * @month: Month in number format.
 * @day: Day of month.
 * @year: Year.
 * Return: void.
 */
void print_remaining_days(int month, int day, int year)
{
    if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
    {
        // If the year is a leap year and the month is after February or the day is after February 29th, add one day.
        if (month > 2 && day > 60)
        {
            day++;
        }
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        // If the year is not a leap year and the date is February 29th, it is an invalid date.
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

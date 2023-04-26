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
	// check if the year is a leap year by checking the conditions
	// specified in the problem
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
		{
        		// if it's a leap year, and the date is after February 29th,
        		// add one to the day count
        		if (month > 2 && day >= 60)
        			{
            				day++;
        			}
			// print the day of the year and the remaining days
        		printf("Day of the year: %d\n", day);
        		printf("Remaining days: %d\n", 366 - day);
    		}
    	else
    		{
        		// if it's not a leap year, and the date is February 29th,
        		// it's an invalid date
        		if (month == 2 && day == 60)
        			{
            				printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        			}
        else
        	{
            		// otherwise, print the day of the year and the remaining days
            		printf("Day of the year: %d\n", day);
            		printf("Remaining days: %d\n", 365 - day);
        	}
    		}
}

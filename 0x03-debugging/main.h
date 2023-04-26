#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Function prototypes */

/* Determines if an integer is positive, negative, or zero */
void positive_or_negative(int i);

/* Returns the largest of three integers */
int largest_number(int a, int b, int c);

/*
 * Computes the remaining number of days in a given year,
 * given the month and day. Takes into account leap years.
 */
void print_remaining_days(int month, int day, int year);

/*
 * Computes the day of the year (1-366) given the month (1-12)
 * and day (1-31). Takes into account leap years.
 */
int convert_day(int month, int day);

#endif

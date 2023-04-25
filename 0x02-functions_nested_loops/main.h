#ifndef MAIN_H
#define MAIN_H

/* Declaration of function prototypes */

int _putchar(char);
/*
 * Writes a character to stdout.
 * Returns the number of bytes written on success, or -1 on error with errno set.
 */

void print_alphabet(void);
/*
 * Prints the lowercase alphabet followed by a newline character.
 */

void print_alphabet_x10(void);
/*
 * Prints the lowercase alphabet 10 times, each time followed by a newline character.
 */

int _islower(int c);
/*
 * Checks whether a given character is a lowercase letter.
 * Returns 1 if the character is lowercase, and 0 otherwise.
 */

int _isalpha(int c);
/*
 * Checks whether a given character is a letter (either uppercase or lowercase).
 * Returns 1 if the character is a letter, and 0 otherwise.
 */

int print_sign(int n);
/*
 * Prints the sign of a given integer (+, 0, or -).
 * Returns 1 if the integer is positive, -1 if it's negative, and 0 if it's 0.
 */

int _abs(int);
/*
 * Computes the absolute value of a given integer.
 * Returns the absolute value.
 */

int print_last_digit(int);
/*
 * Prints the last digit of a given integer.
 * Returns the value of the last digit.
 */

void jack_bauer(void);
/*
 * Prints every minute of a 24-hour day (from 00:00 to 23:59).
 */

void times_table(void);
/*
 * Prints the multiplication table of the numbers 0 through 9.
 */

int add(int, int);
/*
 * Computes the sum of two integers.
 * Returns the sum.
 */

void print_to_98(int n);
/*
 * Prints all natural numbers from n to 98, separated by commas and followed by a newline character.
 * If n is greater than 98, prints the numbers in decreasing order.
 */

void print_times_table(int n);
/*
 * Prints the multiplication table of the number n (from 0 to n), formatted in columns.
 */

#endif /* MAIN_H */

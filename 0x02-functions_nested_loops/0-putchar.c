#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Description: This function writes the character 'c' to the standard output.
 * Return: On success, the number of bytes written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

#endif /* MAIN_H */

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
OBOB/*
 * Computes the sum of two integers.
OB * Returns the sum.
 */
OB
void print_to_98(int n);
/*
 * Prints all natural numbers from n to 98, separated by commas and followed by a newline character.
OB * If n is greater than 98, prints the numbers in decreasing order.
OBOB */

OBvoid print_times_table(int n);
OB/*
 * Prints the multiplication table of the number n (from 0 to n), formatted in columns.
OB */
OBOB
#endif /* MAIN_H */

#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints the word "_putchar" to stdout using the _putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

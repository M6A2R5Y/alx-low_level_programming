#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * This function writes a single character to the standard output stream.
 *
 * The first argument is the character to be written.
 *
 * The function returns the character written as an unsigned char cast to an int or EOF on error.
 */
int _putchar(char c);

/*
 * This header file declares four functions that can be used to work with variadic arguments.
 *
 * The function `sum_them_all()` takes an arbitrary number of integers as arguments and returns the sum of all the arguments.
 *
 * The function `print_numbers()` prints an arbitrary number of integers, separated by a specified separator.
 *
 * The function `print_strings()` prints an arbitrary number of strings, separated by a specified separator.
 *
 * The function `print_all()` prints an arbitrary number of arguments, according to a specified format.
 */

#include <stdarg.h>

/*
 * This function takes an arbitrary number of integers as arguments and returns the sum of all the arguments.
 *
 * The first argument is the number of integers to be summed.
 *
 * The remaining arguments are the integers to be summed.
 */
int sum_them_all(const unsigned int n, ...);

/*
 * This function prints an arbitrary number of integers, separated by a specified separator.
 *
 * The first argument is the separator string.
 *
 * The second argument is the number of integers to be printed.
 *
 * The remaining arguments are the integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/*
 * This function prints an arbitrary number of strings, separated by a specified separator.
 *
 * The first argument is the separator string.
 *
 * The second argument is the number of strings to be printed.
 *
 * The remaining arguments are the strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/*
 * This function prints an arbitrary number of arguments, according to a specified format.
 *
 * The first argument is the format string.
 *
 * The remaining arguments are the arguments to be printed.
 */
void print_all(const char * const format, ...);

#endif

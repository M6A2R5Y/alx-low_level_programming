#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/*
 * print_numbers - Prints a series of numbers, followed by a new line.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 * If separator is NULL, don’t print it.
 * If n is 0, don’t print anything.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Check if the separator is NULL. */
	if (separator == NULL)
	{
		return;
	}
	va_list args;
	unsigned int i;
	va_start(args, n);
	/* Iterate over the variadic arguments and print them, separated by the separator string. */
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	/* Use the va_end macro to destroy the va_list object. */
	va_end(args);
	/* Print a new line. */
	printf("\n");
}

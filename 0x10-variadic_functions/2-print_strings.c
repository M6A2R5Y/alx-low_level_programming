#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * print_strings - Prints a series of strings, followed by a new line.
 *
 * @separator: The string to be printed between each pair of strings.
 * 
 * @n: The number of strings to be printed.
 * 
 * @...: A variable number of strings to be printed.
 *
 * Description: This function takes multiple string arguments and prints them to the standard output, separated by the provided @separator. If @separator is NULL, it is not printed between the strings. If any of the strings are NULL, the string "(nil)" is printed instead.
 *
 * A new line is printed at the end of the output.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
	{
		return;
	}
	/* Check if the number of strings is 0. If it is, don't print anything */
	if (n == 0)
	{
		return;
	}
	/* Use the va_start macro to initialize a variable of type va_list to point to the first variadic argument. */
	va_list args;
	va_start(args, n);
	unsigned int i;
	/* Iterate over the variadic arguments and print them, separated by the separator string. */
	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	/* Use the va_end macro to destroy the va_list object */
	va_end(args);
	/* Print a new line. */
	printf("\n");
}

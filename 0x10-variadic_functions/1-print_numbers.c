#include "variadic_functions.h"
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
	va_list nums;
	unsigned int i;
	int num;
	va_start(nums, n);
	/* Iterate over the variadic arguments and print them, separated by the separator string. */
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		printf("%d", num);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	/* Use the va_end macro to destroy the va_list object. */
	va_end(nums);
	/* Print a new line. */
	printf("\n");
}

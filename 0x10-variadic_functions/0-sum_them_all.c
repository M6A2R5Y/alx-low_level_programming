#include "variadic_functions.h"
#include <stdarg.h>

/*
 * sum_them_all - Calculates the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If @n is 0, the function returns 0.
 *         Otherwise, it returns the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* Check if the number of arguments is zero, if it is, return 0. */
	if (n == 0)
	{
		return (0);
	}
	/* Initialize a variable to store the sum. */
	int sum = 0;
	unsigned int i;
	va_list args;
	va_start(args, n);
	/* Iterate over the variadic arguments and add them to the sum. */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	/* Use the va_end macro to destroy the va_list object. */
	va_end(args);
	/* Return the sum. */
	return (sum);
}

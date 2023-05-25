#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints a list of values of various types, followed by a new line.
 * @format: A string containing the format of the arguments to be printed.
 *          'c' for char, 'i' for integer, 'f' for float, 's' for string.
 *          Any other character is ignored.
 * @...: A variable number of arguments to be printed based on the format.
 *
 * Description: This function prints the values of the provided arguments
 *              based on the format string. If a string argument is NULL,
 *              it is printed as "(nil)". A new line is printed at the end.
 * A new line is printed at the end of the function.
 */
void print_all(const char * const format, ...)
{
	const char *f = format;
	char c;
	int i;
	float f_val;
	char *s_val;
	if (format == NULL)
	{
		return;
	}
	/* Use the va_start macro to initialize a variable of type va_list to point to the first variadic argument. */
	va_list args;
	va_start(args, format);
	/* Iterate over the variadic arguments and print them, according to the format string */
	while (f && *f)
	{
		if (*(f + 1))
		{
			switch (*f)
			{
				case 'c':
					{
						c = va_arg(args, int);
						printf("%c", c);
						break;
					}
				case 'i':
					{
						i = va_arg(args, int);
						printf("%d", i);
						break;
					}
				case 'f':
					{
						f_val = va_arg(args, double);
						printf("%f", f_val);
						break;
					}
				case 's':
					{
						s_val = va_arg(args, char *);
						if (s_val == NULL)
						{
							printf("(nil)");
						}
						else
						{
							printf("%s", s_val);
						}
						break;
					}
				default:
					{
						f++;
						continue;
					}
			}
			if (*(f + 1))
			{
				printf(", ");
			}
		}
		f++;
	}
	/* Use the va_end macro to destroy the va_list object. */
	va_end(args);
	/* Print a new line. */
	printf("\n");
}

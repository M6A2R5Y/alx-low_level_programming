#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;
	n1 = n;
	/* If n is negative, print a '-' and convert n to a positive number */
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	/* Recursively print the digits of n1 by dividing it by 10 */
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	/* Print the last digit of n1 as a character */
	_putchar((n1 % 10) + '0');
}

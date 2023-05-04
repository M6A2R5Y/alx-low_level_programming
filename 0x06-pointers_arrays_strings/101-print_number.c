#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	int div;
	int mod;
	int charCount = 0;
	/* if n is negative, print a '-' sign and change n to its positive value */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* if n is 0, print a '0' character */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* find the number of digits in n */
	div = n;
	while (div != 0);
	{
		div /= 10;
		charCount++;
	}
	/* print each digit of n */
	while (charCount > 0)
	{
		div = 1;
		for (int i = 1; i < charCount; i++)
		{
			div *= 10;
		}
		mod = n / div;
		_putchar(mod + '0');
		n -= mod * div;
		charCount--;
	}
}

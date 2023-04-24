#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	/* Loop through all possible first digits */
	for (n = 48; n <= 56; n++)
	{
		/* Loop through all possible second digits */
		for (m = 49; m <= 57; m++)
		{
			/* Check if second digit is greater than first digit */
			if (m > n)
			{
				putchar(n);
				putchar(m);

				/* Add comma and space unless last combination */
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

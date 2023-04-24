#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			/* Check if i is less than j */
			if (i < j)
			{
				/* Print first two-digit number */
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');

				/* Print second two-digit number */
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				/* Check if it's the last combination */
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}

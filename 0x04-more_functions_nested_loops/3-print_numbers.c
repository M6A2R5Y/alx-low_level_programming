#include "main.h"

/**
 * print_numbers - prints the numbers 0-9
 *
 * Description: This function uses a loop to print the numbers 0-9 to the standard output.
 * It uses the _putchar function to print each character.
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	/* Loop through the characters '0' to '9' */
	for (c = '0'; c <= '9'; c++)
	{
		/* Print each character using the _putchar function */
		_putchar(c);
	}

	/* Print a newline character to move to the next line */
	_putchar('\n');
}

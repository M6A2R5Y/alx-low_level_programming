#include "main.h"

/**
 * print_alphabet - Prints all lowercase alphabets to the standard output
 */
void print_alphabet(void)
{
	char letter;

	/* Iterate over each lowercase alphabet from a to z */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		/* Write the current character to the standard output */
		_putchar(letter);
	}

	/* Write a newline character to the standard output for readability */
	_putchar('\n');
}

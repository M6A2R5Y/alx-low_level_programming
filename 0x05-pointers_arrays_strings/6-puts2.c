#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	/* loop through string, incrementing i by 2 each time */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		/* print character at current index i */
		putchar(str[i]);
	}
	/* print newline character */
	putchar('\n');
}

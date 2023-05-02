#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;
	 /* find length of the string */
	for (len = 0; str[len] != '\0';)
	{
		len++;
	}
	/* determine starting index for printing second half of string */
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2;
	}
	/* print second half of string */
	for (; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	/* print newline character */
	putchar('\n');
}

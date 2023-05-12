#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 * @str: The string to be printed
 *
 * This function prints the string 'str' to the standard output, followed
 * by a new line character ('\n').
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	/* Print a new line character after printing the string */
	putchar('\n');
}
/**
 * main - Entry point
 *
 * This is the main function of the program. It calls the _puts function
 * to print the string "Programming is like building a multilingual puzzle".
 *
 * Return:
 *     Always 0 (Success).
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

#include "main.h"
#include <unistd.h>

void _putchar(char c)
{
	write(1, &c, 1);
}
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Print new line when end of string is reached */
		_putchar('\n');
		return;
	}
	/* Print current character */
	_putchar(*s);
	/* Recursively call with the next character */
	_puts_recursion(s + 1);
}

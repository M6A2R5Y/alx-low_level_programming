#include "main.h"
#include <unistd.h>

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: reached the end of the string */
		return;
	}
	/* Recursively call with the next character */
	_print_rev_recursion(s + 1);
	/* Print the current character after the recursive call */
	_putchar(*s);
}

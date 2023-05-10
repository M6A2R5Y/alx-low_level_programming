#include "main.h"
#include <stdio.h>
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: reached the end of the string */
		return 0;
	}
	/* Recursive call with the next character */
	return 1 + _strlen_recursion(s + 1);
}

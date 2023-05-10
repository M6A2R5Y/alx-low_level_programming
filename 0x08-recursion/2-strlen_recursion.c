#include "main.h"
#include <stdio.h>
/* calculates the length of a string recursively. It takes a pointer to a character (char*) as its parameter, representing the string whose length needs to be determined */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: reached the end of the string */
		return (0);
	}
	/* Recursive call with the next character */
	return (1 + _strlen_recursion(s + 1));
}

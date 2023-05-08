#include "main.h"
#include <stdio.h>
char *_strchr(char *s, char c)
{
	/* Lopp through each character in the string s */
	while (*s != '\0')
	{
		/* If the current character matches the target character c, return a pointer to that character */
		if (*s == c)
		{
			return s;
		}
		/* Otherwise, move on to the next character in the string */
		s++;
	}
	/* If the character c was not found in the string, return NULL */
	return NULL;
}

#include "main.h"
#include <stdio.h>
char *_strpbrk(char *s, char *accept)
{
	/* Loop through each character in s */
	while (*s != '\0')
	{
		/* Loop through each character in accept */
		for (int i = 0; accept[i] != '\0'; i++)
		{
			/* If the current character in s matches a character in accept, return a pointer to that character in s */
			if (*s == accept[i])
			{
				return s;
			}
		}
		/* Move to the next character in s */
		s++;
	}
	/* If no matching character is found, return NULL */
	return NULL;
}

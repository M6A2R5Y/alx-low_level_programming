#include "main.h"
#include <stdio.h>
char *_memset(char *s, char b, unsigned int n)
{
	/* Loop through the first n bytes of the memory area pointed to by s */
	for (unsigned int i = 0; i < n; i++)
	{
		/* Set each byte to the constant value b */
		s[i] = b;
	}
	/* Return a pointer to the memory area s */
	return s;
}

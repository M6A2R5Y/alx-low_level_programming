#include "main.h"
#include <stdio.h>
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Loop through the first n bytes of the src memory area */
	for (unsigned int i = 0; i < n; i++)
	{
		/* Copy the byte at the current index i from src to dest */
		dest[i] = src[i];
	}
	/* Return a pointer to the dest memory area */
	return dest;
}

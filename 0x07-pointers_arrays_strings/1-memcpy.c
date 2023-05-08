#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	/* Loop through the first n bytes of the src memory area */
	for (i = 0; i < n; i++)
	{
		/* Copy the byte at the current index i from src to dest */
		dest[i] = src[i];
	}
	/* Return a pointer to the dest memory area */
	return dest;
}

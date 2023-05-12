#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: The desired value to fill the memory block
 * @n: Number of bytes to be filled
 *
 * This function fills a block of memory starting from the address 's' with
 * the value 'b' for 'n' bytes.
 *
 * Return:
 *     The pointer to the memory block 's' with the modified values.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}

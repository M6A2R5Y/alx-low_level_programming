#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills a block of memory with a specific value
 *@s: Pointer to the starting address of memory to be filled
 * @b: The desired value that is to be stored in each byte of the memory block
 * @n: Number of bytes to be changed
 * *Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

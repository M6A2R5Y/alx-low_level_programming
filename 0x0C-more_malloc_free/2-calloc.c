#include <stdlib.h>
#include "main.h"


/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	/* Fill memory with the constant byte 'b' */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	/* Check for invalid inputs */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Allocate memory for the array */
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		/* Return NULL if memory allocation fails */
		return (NULL);
	}
	/* Set all elements of the allocated memory to 0 */
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

#include <stdlib.h>

#include "main.h"


/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	/* Allocate memory using malloc */
	ptr = malloc(b);
	/* Check if memory allocation was successful */
	if (ptr == NULL)
	{
		/* Exit the program with error code 98 */
		exit(98);
	}
	return (ptr);
}

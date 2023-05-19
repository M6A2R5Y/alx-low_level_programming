#include <stdlib.h>
#include "main.h"


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;
	/* If the new size is equal to the old size, return the original pointer */
	if (new_size == old_size)
	{
		return (ptr);
	}
	/* If new size is 0 and pointer is not NULL, free the pointer and return NULL */
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	/* If pointer is NULL, allocate new memory using malloc */
	if (!ptr)
	{
		return (malloc(new_size));
	}
	/* Allocate memory for the new block */
	ptr1 = malloc(new_size);
	if (!ptr1)
	{
		/* Return NULL if memory allocation fails */
		return (NULL);
	}
	/* Store the old pointer */
	old_ptr = ptr;
	/* Copy contents from the old block to the new block based on size comparison */
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			ptr1[i] = old_ptr[i];
		}
	}
	else if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			ptr1[i] = old_ptr[i];
		}
	}
	/* Free the old memory block */
	free(ptr);
	/*Return the new memory block */
	return (ptr1);
}

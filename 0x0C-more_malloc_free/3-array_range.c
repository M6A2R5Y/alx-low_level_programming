#include <stdlib.h>
#include "main.h"

/**
[O * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;
	/* Check if min is greater than max */
	if (min > max)
	{
		return (NULL);
	}
	/* Calculate the size of the array */
	size = max - min + 1;
	/* Allocate memory for the array */
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		/* Return NULL if memory allocation fails */
		return (NULL);
	}
	/* Populate the array with values from min to max */
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}

#include "function_pointers.h"
#include <stdio.h>
/*
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	/* Check if array and action are valid pointers */
	if (array == NULL || action == NULL)
	{
		return;
	}
	/* Iterate over array elements and execute the provided function on each element */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

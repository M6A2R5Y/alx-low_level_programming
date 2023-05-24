#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: The index of the first element for which the cmp function does not return 0,
 *         or -1 if no element matches or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	/* Check if array and cmp are valid pointers and size is greater than 0 */
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	/* Iterate over the array elements and check if the cmp function returns non-zero */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	/* No element matched the condition */
	return (-1);
}

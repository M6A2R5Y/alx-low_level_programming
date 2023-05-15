#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size `size` and assign character `c`
 * @size: size of the array
 * @c: character to assign to each element
 *
 * Description: This function dynamically allocates an array of characters
 *              with the given size and initializes each element with the
 *              specified character `c`.
 *
 * Return: Pointer to the allocated array, or NULL if allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	/* Allocate memory for the array */
	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	/* Assign character `c` to each element of the array */
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string to a new memory space location
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if allocation fails or
 *         if `str` is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, length = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	/* Determine the length of the input string */
	while (str[length] != '\0')
	{
		length++;
	}
	/* Allocate memory for the duplicate string */
	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	/* Copy the characters from the original string to the duplicate */
	for (i = 0; i < length; i++)
	{
		dup[i] = str[i];
	}
	/* Add null terminator to the duplicate string */
	dup[length] = '\0';
	return (dup);
}

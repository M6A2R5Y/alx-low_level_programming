#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings and return the result
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string, or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;
	/* Handle case when s1 is NULL */
	if (s1 == NULL)
	{
		s1 = "";
	}
	/* Handle case when s2 is NULL */
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Determine the lengths of s1 and s2 */
	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	/* Copy characters from s1 to the concatenated string */
	i = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	/* Copy characters from s2 to the concatenated string */
	j = 0;
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	/* Add null terminator to the concatenated string */
	concat[i] = '\0';
	return (concat);
}

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all command-line arguments into a single string
 *             with newline separators
 * @ac: Number of command-line arguments
 * @av: Array of command-line arguments
 *
 * Return: Pointer to the concatenated string, or NULL if allocation fails or
 *         if ac is 0 or av is NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, length = 0;
	char *str;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			length++;
		}
	}
	length += ac;
	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	/* Copy each argument and add newline separator */
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		/* Add newline separator */
		str[r] = '\n';
		r++;
	}
	/* Add null terminator to the concatenated string */
	str[r] = '\0';
	return (str);
}

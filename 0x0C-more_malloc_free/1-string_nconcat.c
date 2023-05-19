#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	/* Calculate the length of s1 */
	while (s1 && s1[len1])
	{
		len1++;
	}
	/* Calculate the length of s2 */
	while (s2 && s2[len2])
	{
		len2++;
	}
	/* Determine the size of the resulting string based on n and lengths of s1 and s2 */
	if (n < len2)
	{
		s = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (!s)
	{
		/* Return NULL if memory allocation fails */
		return (NULL);
	}
	/* Copy characters from s1 to s */
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	/* Concatenate n bytes from s2 to s if n < len2 */
	while (n < len2 && i < (len1 + n))
	{
		s[i++] = s2[j++];
	}
	/* Concatenate remaining characters from s2 to s if n >= len2 */
	while (n >= len2 && i < (len1 + len2))
	{
		s[i++] = s2[j++];
	}
	/* Add null terminator at the end */
	s[i] = '\0';
	return (s);
}

#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to search for
 *
 * This function searches for the first occurrence of any character in the string 'accept'
 * in the string 's'. It returns a pointer to the byte in 's' that matches one of the
 * characters in 'accept', or NULL if no such byte is found.
 *
 * Return:
 *     - A pointer to the byte in 's' that matches one of the characters in 'accept'
 *     - NULL if no matching byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

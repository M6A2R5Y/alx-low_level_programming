#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The string containing the characters to match
 *
 * This function calculates the length of the longest initial segment of the string 's'
 * that consists entirely of characters from the string 'accept'.
 *
 * Return:
 *     The length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;
	/* Iterate through the string 's' */
	while (*s)
	{
		/* Iterate through the string 'accept' to check if the character in 's' matches any character in 'accept' */
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				/* Increment the count for matching characters */
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

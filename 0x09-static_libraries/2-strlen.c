#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to calculate the length of
 *
 * This function calculates the length of the string 's' by iterating through
 * the characters until the null-terminating character is encountered.
 *
 * Return:
 *     The length of the string 's'.
 */
int _strlen(char *s)
{
	int length = 0;
	/* Iterate through the string until the null-terminating character is found */
	while (*s != '\0')
	{
		length++;
		s++;
	}
	/* Return the length of the string */
	return length;
}

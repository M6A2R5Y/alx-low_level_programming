#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: The character to be checked
 *
 * This function checks if a character is uppercase by comparing its ASCII value
 * with the range of uppercase letters 'A' to 'Z'.
 *
 * Return:
 *     1 if the character is uppercase.
 *     0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

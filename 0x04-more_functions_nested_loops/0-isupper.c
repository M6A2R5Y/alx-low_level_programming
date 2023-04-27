#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/* check if c is within the range of uppercase letter codes */
	if (c >= 'A' && c <= 'Z')
		{
		return (1); /* c is uppercase, so return 1 */
		}
	else
		{
		return (0); /* c is not uppercase, so return 0 */
		}
}

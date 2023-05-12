#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * This function checks whether the character 'c' is a lowercase letter.
 * It returns 1 if 'c' is lowercase and 0 otherwise.
 *
 * Return:
 *     1 if 'c' is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

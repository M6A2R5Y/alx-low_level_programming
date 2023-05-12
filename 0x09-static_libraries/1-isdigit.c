#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to be checked
 *
 * This function checks if a character is a digit by comparing its ASCII value
 * with the range of digit characters '0' to '9'.
 *
 * Return:
 *     1 if the character is a digit.
 *     0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

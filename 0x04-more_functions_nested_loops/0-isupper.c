#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: the integer value to check for uppercase
 *
 * Description: This function takes an integer parameter `c` and checks
 * whether it represents an uppercase character in ASCII encoding.
 *
 * Return: 1 if `c` is an uppercase character, 0 otherwise.
 */
int _isupper(int c)
{
	/* Check if the integer value of `c` is within the range of uppercase characters in ASCII */
	if (c >= 65 && c <= 90)
	{
		/* If `c` is within the range, return 1 to indicate that it is an uppercase character */
		return (1);
	}
	else
	{
		/* If `c` is not within the range, return 0 to indicate that it is not an uppercase character */
		return (0);
	}
}


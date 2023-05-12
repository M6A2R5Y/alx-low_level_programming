#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: The string to convert
 *
 * This function takes a string and converts it into an integer.
 * It considers the optional sign (+ or -) and stops conversion
 * when it encounters a non-digit character.
 *
 * Return:
 *     - The converted integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	unsigned int result = 0;
	/* Check for the optional sign */
	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	/* Convert the string to an integer */
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	/* Apply the sign to the result */
	result *= sign;
	/* Return the converted integer value */
	return result;
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * This function compares the strings 's1' and 's2' character by character.
 * It returns an integer value indicating the difference between the ASCII values
 * of the first differing characters in the strings. If the strings are equal,
 * it returns 0.
 *
 * Return:
 *     Negative value if s1 < s2
 *     Positive value if s1 > s2
 *     Zero if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	/* Loop through the strings and compare each character until the null-terminating character ('\0') is encountered */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

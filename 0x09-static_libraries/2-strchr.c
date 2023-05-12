#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 *
 * This function searches for the first occurrence of the character 'c' in the
 * string 's'. If the character is found, it returns a pointer to the first
 * occurrence of the character in the string. If the character is not found, it
 * returns NULL.
 *
 * Return:
 *     - Pointer to the first occurrence of 'c' in 's', if found.
 *     - NULL if 'c' is not found in 's'.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	/* Iterate through the string until the end is reached */
	while (s[i] != '\0')
	{
		/* If the character is found, return the pointer to its location */
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	/* Return NULL if the character is not found in the string */
	return NULL;
}

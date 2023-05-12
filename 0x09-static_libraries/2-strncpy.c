#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to be copied
 *
 * This function copies at most 'n' characters from the string 'src' to the
 * string 'dest'. If 'src' is shorter than 'n' characters, null characters
 * ('\0') are appended to 'dest' until a total of 'n' characters have been
 * written.
 *
 * Return:
 *     - Pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	/* Copy characters from source string to destination string up to 'n' characters */
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	/* If 'src' is shorter than 'n', append null characters ('\0') to 'dest' */
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return dest;
}

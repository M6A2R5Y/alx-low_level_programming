#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string to be concatenated
 * @src: The source string to be appended
 *
 * This function concatenates the source string 'src' to the end of the
 * destination string 'dest'. The resulting concatenated string is stored
 * in 'dest'.
 *
 * Return:
 *     The pointer to the resulting concatenated string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;
	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* Append the source string to the destination string */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	/* Add the null-terminating character */
	dest[dest_len + i] = '\0';
	return dest;
}

#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: The destination string to be concatenated
 * @src: The source string to be appended
 * @n: The maximum number of bytes from src to be appended
 *
 * This function concatenates the source string 'src' to the end of the
 * destination string 'dest', using at most 'n' bytes from src. The resulting
 * concatenated string is stored in 'dest'.
 *
 * Return:
 *     The pointer to the resulting concatenated string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;
	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* Append at most 'n' bytes from the source string to the destination string */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	/* Add the null-terminating character */
	dest[dest_len + i] = '\0';
	return dest;
}

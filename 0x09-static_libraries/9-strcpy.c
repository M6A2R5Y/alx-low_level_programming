#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: The destination string where the copy will be stored
 * @src: The source string to be copied
 *
 * This function copies the string pointed to by 'src' (including the
 * terminating null character) to the buffer pointed to by 'dest'.
 * The copying stops after reaching the null character in 'src'.
 *
 * Return:
 *     - A pointer to the destination string 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;
	/* Calculate the length of the source string */
	while (src[length] != '\0')
	{
		length++;
	}
	/* Copy each character from source to destination */
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	/* Add the null character to the end of the destination string */
	dest[length] = '\0';
	/* Return a pointer to the destination string */
	return dest;
}

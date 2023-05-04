#include <stdio.h>
/*

_strncat - concatenate two strings using at most n bytes from src

@dest: pointer to the destination string where the content will be copied

@src: pointer to the source string to be appended to the end of dest

@n: maximum number of bytes to be used from src

This function copies the characters from src to the end of dest,

overwriting the null byte ('\0') at the end of dest and then

adds a terminating null byte. The function will not copy more than n bytes

from src if the source string is longer than n bytes.

Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	/* index to traverse dest */
	int i;
	/* index to traverse src */
	int j;
	/* find the end of the destination string */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	/* append the source string to the destination string */
	j = 0;
	while (j<n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/* return a pointer to the resulting string dest */
	return (dest); 
}

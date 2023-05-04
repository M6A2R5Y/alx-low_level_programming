#include <stdio.h>
char *_strncat(char *dest, char *src, int n)
{
	/* get length of dest string */
	int dest_len = strlen(dest);
	int i;
	/* copy at most n bytes from src to dest, starting from the end of dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	/* add null terminator to end of dest */
	dest[dest_len + i] = '\0';
	/* return pointer to the resulting string dest */
	return dest;
}

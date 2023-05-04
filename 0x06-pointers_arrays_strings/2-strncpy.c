#include <stdio.h>
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*  copy at most n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* pad dest with null bytes if necessary */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	/* return pointer to the resulting string dest */
	return dest;
}	

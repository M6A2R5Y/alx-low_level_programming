#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	/*Loop through each character in the string s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop through each character in the accept string */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* If the current character in s matches the current character in accept, continue searching */
			if (s[i] == accept[j])
			{
				break;
			}
		}
		/* If the end of the accept string is reached, return the current position in s as the length of the prefix substring */
		if (accept[j] == '\0')
		{
			return i;
		}
	}
	/* If the end of s is reached, return the length of the entire string as the length of the prefix substring */
	return i;
}

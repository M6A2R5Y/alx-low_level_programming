#include "main.h"
#include <stdio.h>
char *rot13(char *str)
{
	int i, j;
	char c;
	/* Loop through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		/* Check if the character is a letter */
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			/* Shift the letter by 13 positions */
			for (j = 0; j < 13; j++)
			{
				c++;
				/* If the letter goes beyond 'z' or 'Z', wrap it around */
				if (c > 'z')
				{
					c = 'a';
				}
				if (c > 'Z' && c < 'a')
				{
					c = 'A';
				}
			}
		}
		/* Replace the character in the string with the encoded character */
		str[i] = c;
	}
	/* Return the encoded string */
	return str;
}

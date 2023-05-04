#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: Pointer to the resulting encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	/* Loop through the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Lopp through the rot13 mapping arrays */
		for (j = 0; j < 52; j++)
		{
			/* If the current character matches with a letter */
			if (s[i] == data1[j])
			{
				/* Replace it with the corresponding rot13 letter */
				s[i] = datarot[j];
				break;
			}
		}
	}
	/* return the encoded string */
	return (s);
}

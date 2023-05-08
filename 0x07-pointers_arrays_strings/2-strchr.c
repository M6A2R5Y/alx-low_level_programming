#include "main.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: string to search
 * @c: character to locate
 * Return: pointer to the first occurrence of the character c in string s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	/*  loop through the string s */
	for (; s[i] >= '\0'; i++)
	{
		/*  if the current character matches the character c, return the address of the current character */
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	/* if the character c was not found, return NULL */
	return (0);
}

#include "main.h"
#include <stdio.h>
int _strlen(char *s)
{
	if (*s == '\0')
	{
		/* Base case: reached the end of the string */
		return (0);
	}
	/* Recursive call with the next character */
	return (1 + _strlen(s + 1));
}
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		/* Base case: reached the middle or crossed each other, palindrome */
		return (1);
	}
	if (s[start] != s[end])
	{
		/* Base case: characters at start and end don't match, not palindrome */
		return (0);
	}
	/* Recursive call with the next characters */
	return (check_palindrome(s, start + 1, end - 1));
}
int is_palindrome(char *s)
{
	int length = _strlen(s);
	return (check_palindrome(s, 0, length - 1));
}

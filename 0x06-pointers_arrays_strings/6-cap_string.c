#include <stdio.h>
/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to be capitalized
 *
 * Return: A pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		/* If the current character is a lowercase letter and is either
		 * the first character of the string or follows a separator,
		 * capitalize it
		 */
		if (s[i] >= 'a' && s[i] <= 'z' &&(i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'))
		{
			s[i] = s[i] - 32;
		}	
	}
	return s;
}

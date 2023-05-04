#include <stdio.h>
char *string_toupper(char *s)
{
	int i = 0;
	/* loop through each character in the string */
	while (s[i] != '\0')
	{
		/* if the character is a lowercase letter, convert it to uppercase */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	/* return a pointer to the modified string */
	return s;
}

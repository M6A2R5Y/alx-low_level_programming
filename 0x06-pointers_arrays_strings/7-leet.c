#include <stdio.h>
char *leet(char *str)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *leet = "4433007711";
	/* Loop through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Loop through each character in the letters array */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/* If the current character in the string matches the current character in the letters array */
			if (str[i] == letters[j])
			{
				/* Replace the current character in the string with the corresponding leet character */
				str[i] = leet[j];
				/* Break out of the letters loop and move on to the next character in the string */
				break;
			}
		}
	}
	/* Return the modified string */
	return str;
}

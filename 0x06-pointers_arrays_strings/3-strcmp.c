#include <stdio.h>
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	/* compare each character in s1 and s2 until a difference is found */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			break;
		}
		i++;
	}
	/* if s1[i] and s2[i] are both null bytes, the strings are equal */
	/* otherwise, return the difference between s1[i] and s2[i] */
	return s1[i] - s2[i];
}

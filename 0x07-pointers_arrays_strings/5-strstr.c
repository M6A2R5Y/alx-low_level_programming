#include "main.h"
#include <stdio.h>
char *_strstr(char *haystack, char *needle)
{
	/* If needle is an empty string, return haystack */
	if (*needle == '\0')
	{
		return haystack;
	}
	/* Loop through each character in haystack */
	while (*haystack != '\0')
	{
		/* Create pointers to the current position in haystack and needle */
		char *h = haystack;
		char *n = needle;
		/* Loop through each character in needle, comparing it to the corresponding character in haystack */
		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		/* If the entire needle has been matched, return a pointer to the beginning of the match in haystack */
		if (*n == '\0')
		{
			return haystack;
		}
		/* Move to the next character in haystack */
		haystack++;
	}
	/* If no match is found, return NULL */
	return NULL;
}

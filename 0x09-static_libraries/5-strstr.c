#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * This function finds the first occurrence of the substring 'needle' in the string
 * 'haystack'. It returns a pointer to the beginning of the located substring within
 * 'haystack', or NULL if the substring is not found.
 *
 * Return:
 *     - A pointer to the beginning of the located substring within 'haystack'
 *     - NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *p = needle;
		/* Compare each character in haystack and needle */
		while (*haystack == *p && *p != '\0')
		{
			haystack++;
			p++;
		}
		/* If we reached the end of needle, the substring is found */
		if (*p == '\0')
		{
			return (start);
		}
		/* If there was a mismatch, reset haystack to the next position */
		haystack = start + 1;
	}
	/* If no match is found, return NULL */
	return (NULL);
}

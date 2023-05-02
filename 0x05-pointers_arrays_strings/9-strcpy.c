#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	/* copy each character of src to dest */
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	/* copy the null terminator */
	*(dest + i) = *(src + i);
	/* return pointer to dest */
	return (dest);
}

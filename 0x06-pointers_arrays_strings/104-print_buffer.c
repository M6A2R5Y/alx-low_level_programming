#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j;
	/* iterate through buffer, printing 10 bytes per line */
	for (i = 0; i < size; i += 10)
	{
		/* print the start position of the line in hexadecimal */
		printf("%08x: ", i);
		/* print the hexadecimal content of the buffer, 2 bytes at a time, separated by a space */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", *(b + i + j));
			}
			else
			{
				printf("  ");
			}
			if (j % 2 != 0)
			{
				printf(" ");
			}
		}
		/* print the content of the buffer, printing '.' if the byte is not a printable character */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (*(b + i + j) >= 32 && *(b + i + j) <= 126)
				{
					printf("%c", *(b + i + j));
				}
				else
				{
					printf(".");
				}
			}
		}
		/* end the line with a new line character */
		printf("\n");
	}
	/* if size is 0 or less, output a new line only */
	if (size <= 0)
	{
		printf("\n");
	}
}

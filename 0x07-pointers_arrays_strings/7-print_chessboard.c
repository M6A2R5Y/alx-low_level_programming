#include "main.h"
#include <unistd.h>
void print_chessboard(char (*a)[8])
{
	int i, j;
	/* Buffer to hold each character and a space */
	char buffer[2];
	/* Loop over each row of the chessboard */
	for (i = 0; i < 8; i++)
	{
		/* Loop over each column of the current row */
		for (j = 0; j < 8; j++)
		{
			/* Copy the current character to the buffer */
			buffer[0] = a[i][j];
			/* Add a space after the character */
			buffer[1] = ' ';
			/* Write the buffer to standard output */
			write(STDOUT_FILENO, buffer, 2);
		}
		/* Write a newline character to separate rows */
		write(STDOUT_FILENO, "\n", 1);
	}
}	

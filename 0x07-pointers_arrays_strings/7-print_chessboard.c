#include "main.h"
#include <unistd.h>
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	for (i = 0; i < 8; i++)
	{
		/* Loop over each column of the current row */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

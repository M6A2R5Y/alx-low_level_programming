#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D grid
 * @grid: The 2D grid
 * @height: The height dimension of the grid
 *
 * Description: This function frees the memory allocated for a 2D grid.
 *              It first frees each row of the grid, and then frees the
 *              memory for the grid itself.
 *
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i;
	/* Free memory for each row of the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/* Free memory for the grid itself */
	free(grid);
}

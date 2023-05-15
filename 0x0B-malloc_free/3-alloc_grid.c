#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a 2D grid of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the allocated 2D grid, or NULL if allocation fails or
 *         if either width or height is less than or equal to 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;
	/* Check for invalid width or height */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* Allocate memory for the rows of the grid */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for each row and initialize to 0 */
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			/* Free previously allocated memory on failure */
			for (; x >= 0; x--)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
	}
	/* Initialize all elements of the grid to 0 */
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}

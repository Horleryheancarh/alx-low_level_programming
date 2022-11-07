#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free a 2d array malloc
 *@grid: 2d array
 *@height: integer height of the 2d array
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

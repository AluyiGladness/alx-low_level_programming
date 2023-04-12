#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid  - free a grid
 * @grid: grid to examine
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

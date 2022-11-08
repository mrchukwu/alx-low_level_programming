#include "main.h"
#include <stdlib.h>

/**
 * free_grid- frees 2d integer grid prviously created by alloc_grid
 * @grid: pointer to array of int
 * @height: number of rows
 * Return: nothing, frees memory
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

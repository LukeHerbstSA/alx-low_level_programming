#include <stdio.h>
#include <stdlib.h>

/**
	* free_grid - void
	* Description: frees passed 2d grid
	* @grid: pass 2d grid
	* @height: height of the grid
	*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

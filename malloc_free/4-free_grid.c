#include "main.h"
/**
 * free_grid - Frees a 2 dimensional grid
 *				previously created by your alloc_grid function.
 * @grid: Variable for array grid
 * @height: Variable for height
 **/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}

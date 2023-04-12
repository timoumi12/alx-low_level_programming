#include "main.h"

/**
 * free_grid - dc
 * @grid: int
 * @height: int
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}



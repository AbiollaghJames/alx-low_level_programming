#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory
 * @grid: par 1
 * @height: par 2
 * Return: 0 Success
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
		return;
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}

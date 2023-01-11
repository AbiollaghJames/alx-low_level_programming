#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees memory
 * @grid: par 1
 * @height: par 2
 * Return: 0 Success
 */
void free_grid(int **grid, int height)
{
  int i, *p;

  for (i = 0; i < height; i++)
    {
      p = grid[i];
      free(p);
    }
  free(grid);
}

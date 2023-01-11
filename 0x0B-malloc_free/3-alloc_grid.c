#include "main.h";
#include <stdlib.h>
/**
 * alloc_grid - return pointer to 2D array
 * @width: par 1
 * @height: par 2
 * Return: 0 Success
 */
int **alloc_grid(int width, int height)
{
  int **matrix;
  int i, j, k;
  int *ptr;

  if (width <= 0 || height <= 0)
    return (NULL);

  matrix = (int **)malloc(height * sizeof(int *));

  if (matrix == NULL)
    return (NULL);

  for (i = 0; i < height; i++)
    {
      *(matrix + 1) = (int *)malloc(width * sizeof(int));

      if (*(matrix + 1) == NULL)
	{
	  for (i = 0; i < height; i++)
	    {
	      ptr = matrix[i];
	      free(ptr);
	    }
	  free(matrix);
	  return (NULL);
	}
    }
  for (k = 0; k < height; k++)
    {
      for (j = 0; j < width; j++)
	{
	  matrix[k][j] = 0;
	}
    }
  return (matrix);
}

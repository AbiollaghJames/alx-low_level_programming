#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array of ints
 * @min: par 1
 * @max: par 2
 * Return: 0 Success
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, x = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = x++;
	return (arr);
}

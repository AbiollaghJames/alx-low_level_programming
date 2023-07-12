#include <math.h>
#include <stdint.h>
#include "search_algos.h"
/**
 * jump_search - searches for value in sorted array using jump sort
 * @array: Pointer to first element of array to search in
 * @size: Vumber of elements in the array
 * @value: Value to search for
 * Return: Index of value or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	int j_size = sqrt(size), start = 0, end = 0;

	if (array == NULL || size == 0 || array[start] > value)
		return (-1);

	while (end < (int)size)
	{
		if (array[end] < value)
		{
			printf("Value checked array[%d] = [%d]\n", end, array[end]);
			start = end;
			end += j_size;
		}
		else
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);

	if (end > (int)size - 1)
		end = size - 1;

	while (start <= end)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}

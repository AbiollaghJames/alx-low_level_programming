#include "search_algos.h"
/**
 * linear_search - searches a value using linear search
 * @array: Array to be searched
 * @size: Array size
 * @value: Element to be searched in the array
 * Return: Index of value or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || value == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

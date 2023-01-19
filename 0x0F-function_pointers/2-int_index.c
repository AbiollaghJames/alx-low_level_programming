#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Search for an int
 * @array: the array
 * @size: array size
 * @cmp: pointer to function
 * Return: 0 Sucess
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates and prints each element of array
 * @array: The array
 * @size: siez of array
 * @action: Pointer to function
 * Return: 0 Success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

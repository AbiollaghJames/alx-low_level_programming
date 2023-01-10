#include "main.h"
#include <stdio.h>
/**
 * *create_array - creates array
 * @size: par 1
 * @c: par 2
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (NULL);
	while (size--)
		arr[size] = c;
	return (arr);
}

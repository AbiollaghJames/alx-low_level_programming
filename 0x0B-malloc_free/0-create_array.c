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
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = (char *)(malloc(size * sizeof(char)));

	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}

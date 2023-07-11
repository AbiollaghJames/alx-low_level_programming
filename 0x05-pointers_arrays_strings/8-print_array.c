#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: array to print its elements
 * @n: array size
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
		printf("\n");
}

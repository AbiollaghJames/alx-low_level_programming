#include "main.h"
/**
 * print_triangle - Prints triangle
 * @size: parameter
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int h, index;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (index = size - h; index > 0; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < h; index++)
			{
				_putchar('#');
			}
			if (h == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

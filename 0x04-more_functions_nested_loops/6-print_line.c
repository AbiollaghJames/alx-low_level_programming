#include "main.h"
/**
 * print_line - Prints a straight line
 *@n: parameter
 *
 * Return: 0
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

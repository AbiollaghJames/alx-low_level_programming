#include "main.h"
/**
 * print_line - Prints a straight line
 *@n: parameter
 *
 * Return: 0
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

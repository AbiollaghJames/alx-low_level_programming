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

	for (x = 0; x <= n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_',\n);
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_line - Prints a straight line
 *@n: parameter
 *
 * Return: 0
 */
void print_line(int n)
{
	for (n = 0; n < 15; n++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

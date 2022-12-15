#include "main.h"
/**
 * print_line - Prints a straight line
 *@n: parameter
 *
 * Return: 0
 */
void print_line(int n)
{
	while (n -- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_number - Prints integers
 * @n: parameter
 *
 * Return: 0
 */
void print_number(int n)
{
	for (n = 0; n <= 9; n++)
	{
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}

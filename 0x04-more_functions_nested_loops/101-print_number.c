#include "main.h"
/**
 * print_number - Prints integers
 * @n: parameter
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if ((number / 10) > 0)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}

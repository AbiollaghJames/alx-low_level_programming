#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: parameter
 *
 * Return: 0
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		_putchar(n);
		_putchar(',');
		n++;
	}
}

#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: parameter
 *
 * Return: 0
 */
void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
		_putchar('%d', n);
		_putchar(',');
	}
}

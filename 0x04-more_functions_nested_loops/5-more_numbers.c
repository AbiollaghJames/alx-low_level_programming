#include "main.h"
/**
 * more_numbers - prints 10 times the number
 *
 * Return: 0
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}

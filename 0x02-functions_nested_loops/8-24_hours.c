#include "main.h"
/**
 * jack_bauer - Prints every minute
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			if (x < 10)
			{
				_putchar('0');
				_putchar(x + '0');
			}
			_putchar(x);
			_putchar(':');
			_putchar(y);
		}
	}
}

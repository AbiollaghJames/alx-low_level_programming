#include "main.h"
/*
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char abb, i = '0';

	for (abb = 'a'; abb <= 'z'; abb++)
	{
		_putchar(abb);

		for (i = '0'; i <= '10'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

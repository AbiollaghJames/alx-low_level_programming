#include "main.h"
/*
 * print_alphabet - Entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char abb = 'a';

	while (abb <= 'z')
	{
		_putchar(abb);
		abb++;
	}
	_putchar('\n');
}

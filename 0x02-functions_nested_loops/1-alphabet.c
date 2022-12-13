#include "main.h"
/*
 * main -Entry point
 *
 * Return: always 0 (Success)
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

#include "main.h"
/*
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int number;
	char abb;

	for (number = 0; number < 10; number++)
	{
		for (abb = 'a'; abb <= 'z'; abb++)
		{
			_putchar(abb);
		}
		_putchar('\n');
	}
}

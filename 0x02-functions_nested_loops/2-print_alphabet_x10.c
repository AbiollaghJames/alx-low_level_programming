#include "main.h"
/*
 * print_alphabet_x10 - Prints alphabet 10 times
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

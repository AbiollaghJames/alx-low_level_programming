#include "main.h"
/*
 * print_alphabet_x10 - Entry point
 *
 * Return: 0
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
			_putchar('\n');
		}
	}
}

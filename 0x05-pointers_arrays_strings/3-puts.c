#include "main.h"
/**
 * _puts - prints a string
 * @str: parameter
 * Return: printed string
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar("%c", str[s]);
	}
	_putchar('\n');
}

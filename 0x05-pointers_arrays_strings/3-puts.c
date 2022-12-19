#include "main.h"
/**
 * _puts - prints a string
 * @str: parameter
 * Return 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

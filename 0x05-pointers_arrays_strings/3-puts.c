#include "main.h"
/**
 * _puts - prints string
 * @str: parameter
 * Return: printed string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

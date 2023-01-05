#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: parameter
 * Return: 0 Sucess
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

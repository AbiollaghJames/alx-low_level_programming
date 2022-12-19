#include "main.h"
/**
 * puts2 - prints character
 * @str: parameter
 * Return: 0
 */
void puts2(char *str)
{
	int x = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * puts2 - prints character
 * @str: parameter
 * Return: 0
 */
void puts2(char *str)
{
	int x;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
			x++;
		}
	}
	_putchar('\n');
}

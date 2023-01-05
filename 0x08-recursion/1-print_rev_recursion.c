#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: parameter
 * Return: 0 Success
 */
void _print_rev_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _print_rev_recursion(s + 1);
	}
}

#include "main.h"
/**
 * _memset - Fill memory with value
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: changed array with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(s + x) = b;
		x++;
	}
	return (s);
}

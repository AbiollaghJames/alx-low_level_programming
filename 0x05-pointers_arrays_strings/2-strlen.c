#include "main.h"
/**
 * _strlen - length of string
 * @s: parameter
 * Return 0
 */
int _strlen(char *s)
{
	int l;

	while (*s != '\0')
	{
		l = l + 1;
		*s = *s + 1;
	}
	return (l);
}

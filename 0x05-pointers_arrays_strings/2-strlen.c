#include "main.h"
/**
 * _strlen - length of string
 * @s: parameter
 * Return 0
 */
int _strlen(char *s)
{
	int l;

	for (; *s != '\0'; s++)
	{
		l += 1;
	}
	return (l);
}

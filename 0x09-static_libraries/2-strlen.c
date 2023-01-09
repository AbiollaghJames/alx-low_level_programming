#include "main.h"
#include <string.h>
/**
 * _strlen - length of string
 * @s: parameter
 * Return: returns for strlen
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}

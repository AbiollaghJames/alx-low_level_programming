#include "main.h"
/**
 * _strchr - searches a character
 * @s: parameter 1
 * @c: parameter 2
 * Return: search
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}

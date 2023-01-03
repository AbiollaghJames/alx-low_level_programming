#include "main.h"
/**
 * _strpbrk - search string for a set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 * Return: 0 Success
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(s + x) == *(accept + y))
			{
				break;
			}
		}
		if (*(accept + y) != '\0')
		{
			return (s + x);
		}
	}
	return (0);
}
